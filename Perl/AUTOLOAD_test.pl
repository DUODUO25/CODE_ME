use strict;
use warnings;
use 5.012;
use Data::Dumper;

say 'Hi';
welcome('Foo','Bar');
say 'Bye';

# sub AUTOLOAD {
#     our $AUTOLOAD;
#     say $AUTOLOAD;
#     say Dumper \@_;
# }