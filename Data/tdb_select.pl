#!/usr/bin/perl
use lib '/usr/lib/cgi-bin/Data';
use Testdb;

local ($buffer, @pairs, $pair, $name, $value, %FORM);
# read the info of $ENV{}
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
my $select = $FORM{select};
print "Content-type:text/html\r\n\r\n";
print "<html>";
print "<head>";
print '<meta charset="utf-8">';
print '<title>Test_Database(Duo.com)</title>';
print "</head>";
print "<body>";
print '<a href="http://localhost/Testdb.html">Back</a>';
print "<h2>the selected:</h2>";
print "<p>$select_content</p>";
print "</body>";
print "</html>";
my $select_content = Testdb->select($select);
1;