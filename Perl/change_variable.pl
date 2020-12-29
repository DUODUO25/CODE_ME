use strict;
use warnings;
use Data::Dumper;
use feature 'say';

# firstly a hash ref
my $hr_hash = { 
    foo => [{
        key => 1,
    },{
        key => 1,
    }],
};
say '1: '.Dumper($hr_hash);
foreach my $hr_h (@{$hr_hash->{foo}}) {
    $hr_h->{key} = 2;
}
 
say '2: '.Dumper($hr_hash);