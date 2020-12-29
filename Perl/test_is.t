use strict;
use warnings;
use Data::Dumper;
use Test::More;

my @a_arr = (2,3,1);

is((1,2,3),(4,5,3),'test');

print sort(@a_arr) ,"\n";

done_testing();