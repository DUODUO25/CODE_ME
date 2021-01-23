use strict;
use warnings;
use feature 'say';
use Getopt::Long qw(GetOptions);
Getopt::Long::Configure qw(gnu_getopt);
my $str = 'kkk';
print "this is string reference: ", \$str, "\n";

my $str_void = '';
if(\$str_void){
 say 'kkk';
}
else {
    say 'jjj';
}