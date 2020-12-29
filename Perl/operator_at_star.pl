use strict;
use warnings;
use feature 'say';
use Data::Dumper;

my $ar_test = [1,2,3];
my @a_test = $ar_test->@*;
say Dumper(\@a_test);