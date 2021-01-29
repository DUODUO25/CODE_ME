package Person;
use strict;
use warnings;
use Data::Dumper;

sub new
{
    my $class = shift;
    # my $self = {
    #     _firstName => shift,
    #     _lastName  => shift,
    #     _ssn       => shift,
    # };
    # print "name: $self->{_firstName}\n";
    # print "lastname: $self->{_lastName}\n";
    # print "id: $self->{_ssn}\n";
    # bless $self, $class;
    # return $self;
    return bless {},$class;
}

1;
