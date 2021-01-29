use strict;
use warnings;
use lib 'c:\Users\c5291305\Documents\MyProject\Perl';
use Person;
use Data::Dumper;
use feature 'say';

my $obj = Person->new();
say Dumper($obj);