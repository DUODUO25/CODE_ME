use strict;
use warnings;
use Readonly;
use Data::Dumper;
use feature 'say';
 
Readonly::Scalar1 my $ref => { 1 => 'a' };
$ref->{1} = 'b';
$ref->{2} = 'b';
say Dumper($ref);