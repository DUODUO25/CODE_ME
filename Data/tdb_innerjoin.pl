#!/usr/bin/perl

use lib '/usr/lib/cgi-bin/Data';
use Testdb;

local ($buffer, @pairs, $pair, $name, $value, %FORM);
# Read the info of $ENV{}
$ENV{'REQUEST_METHOD'} =~ tr/a-z/A-Z/;
if ($ENV{'REQUEST_METHOD'} eq "POST")
{
   read(STDIN, $buffer, $ENV{'CONTENT_LENGTH'});
}else {
   $buffer = $ENV{'QUERY_STRING'};
}

# Read the detailed info-stream
@pairs = split(/&/, $buffer);
foreach $pair (@pairs)
{
   ($name, $value) = split(/=/, $pair);
   $value =~ tr/+/ /;
   $value =~ s/%(..)/pack("C", hex($1))/eg;
   $FORM{$name} = $value;
}

# Get&Receive the required info
my $table3 = $FORM{table3};
my $table4 = $FORM{table4};
my $column3 = $FORM{column3};
my $column4 = $FORM{column4};

print "Content-type:text/html\r\n\r\n";
print "<html>";
print "<head>";
print '<meta charset="utf-8">';
print '<title>Test_Database(Duo.com)</title>';
print "</head>";
print "<body>";
print '<a href="http://localhost/Testdb.html">Back</a>';
print "<h3>the innerjoin:</h3>";
print "<p>$innerjoin_content</p>";
print "</body>";
print "</html>";

my $innerjoin_content = Testdb->InnerJoin($column3,$table3,$table4,$column4);

1;