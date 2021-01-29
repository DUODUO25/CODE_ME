use strict;
use warnings;
use 5.010;
use lib 'c:\Users\c5291305\Documents\MyProject\Perl';
use Greet;
use Data::Dumper;

my $g = Greet->new();

# say Dumper($g);

say 'Hi';
$g->welcome('Foo', 'Bar');
say 'Bye';

exit(0);