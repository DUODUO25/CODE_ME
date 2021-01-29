package Greet;
use strict;
use warnings;
use Data::Dumper;
use feature 'say';

sub new {
    my ($class) = @_;
    return bless {}, $class;
}

sub AUTOLOAD {
    my ($self, @params) = @_;
    our $AUTOLOAD;
    say $AUTOLOAD;
    # say Dumper(\@_);
}

# If you define an AUTOLOAD in your class, then Perl will call your AUTOLOAD to handle the DESTROY method.
# You can prevent this by defining an empty DESTROY
sub DESTROY {}
 
1;

__END__
link reference: https://perldoc.perl.org/perlobj#Destructors
link reference: https://perlmaven.com/autoload