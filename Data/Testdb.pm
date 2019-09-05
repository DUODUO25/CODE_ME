package Testdb;
use strict;
use warnings;
use DBI;
use 5.012;

#this is DB and Perl connection, through perl program you can operate the DB.
sub new{}

my $drive    = "Pg";
my $database = "postgres";
my $dsn      = "DBI:$drive:dbname=$database;host=localhost;port=5432";
my $userid   = "postgres";
my $password = "postgres";
my $dbh      = DBI->connect($dsn, $userid, $password, {RaiseError => 1}) or die $DBI::errstr;

sub select{
   my ($self, $name) = @_;
   my $stmt = qq(
      SELECT *
      FROM $name;
   );
   my $sth = $dbh->prepare($stmt);
   my $rv  = $sth->execute() or die $DBI::errstr;
   if ($rv < 0) {
      print $DBI::errstr;
   }
   while (my @row = $sth->fetchrow_array()) {
     foreach(@row)
     {
        print "$_\n";
     }
   }
   $dbh->disconnect();
}

sub insert{
   my ($self,$table_name,$v0) = @_;
   my @var=split/\s+/,$v0;
   my $stmt;
   if ("$table_name" eq 'serve'){
      $stmt = qq(INSERT INTO serve(checkid,name,system,storage)
         VALUES($var[0],'$var[1]','$var[2]',$var[3]));
      my $rv = $dbh->do($stmt) or die $DBI::errstr;
      if(!($rv)){
         print "Oops! Recheck it please~";
      }else{
         print "inserted $rv successfully!\n";
      }
      $dbh->disconnect();
   }
   elsif("$table_name" eq 'storage'){
      $stmt = qq(
         INSERT INTO storage(checkid,name,capacity)
         VALUES($var[0],'$var[1]',$var[2]);
      );
      my $rv = $dbh->do($stmt) or die $DBI::errstr;
      if(!($rv)){
         print "Oops! Recheck it please~";
      }else{
         print "inserted $rv successfully!\n";
      }
      $dbh->disconnect();
   }
}

sub delete{
   my ($self,$table1,$condition) = @_;
   $condition =~ s/^where //i;
   $condition =~ s/\bname\b\s*=\s*(\w+)\s*/name='$1' /;
   $condition =~  s/\bsystem\b\s*=\s*(\w+)\s*/system='$1' /;
   my $stmt  = qq(DELETE FROM $table1 WHERE $condition);
   my $rv = $dbh->do($stmt) or die $DBI::errstr;
   if ($rv < 0) {
      print $DBI::errstr;
   }
   else {
      print "Total number of rows deleted: $rv\n";
   }
   $dbh->disconnect();
}

sub update{
   my ($self,$table2,$column2,$condition2)=@_;
   $column2 =~ s/^set //i;
   $condition2 =~ s/^where //i;
   # notes: confirm the var char are quoted with ''
   $column2 =~ s/\bname\b\s*=\s*(\w+)\s*/name='$1' /;
   $column2 =~ s/\bsystem\b\s*=\s*(\w+)\s*/system='$1' /;
   $condition2 =~ s/\bname\b\s*=\s*(\w+)\s*/name='$1' /;
   $condition2 =~  s/\bsystem\b\s*=\s*(\w+)\s*/system='$1' /;
   my $stmt = qq(UPDATE $table2 SET $column2 WHERE $condition2);
   my $rv   = $dbh->do($stmt) or die $DBI::errstr;
   if ($rv < 0) {
      print $DBI::errstr;
   }
   else {
      print "Total number of rows updated:$rv\n";
   }
   $dbh->disconnect();
}

sub InnerJoin{
   my ($self,$column3,$table3,$table4,$column4)=@_;
   $column3 =~ s/^set //i;
   my $stmt = qq(SELECT $column3
                 FROM $table3
                 INNER JOIN $table4
                 ON $column4;
   );
   my $rv   = $dbh->do($stmt) or die $DBI::errstr;
   if ($rv < 0) {
      print $DBI::errstr;
   }
   else {
      print "Total number of rows joined:$rv\n";
   }
   $dbh->disconnect();
}

1;