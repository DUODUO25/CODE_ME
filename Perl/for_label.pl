use strict;
use warnings;
use Data::Dumper;

my $hr_test = {
    state => [{ip => [123,456,789]},{ip => [777,234,345]}],
};
IP: foreach $_ (@{$hr_test->{state}}) {
    NUM: foreach my $num (@{$_->{ip}}) {
        print($num,"\n");
        if ($num !~ /^\d+\.\d+\.\d+\.\d+$/) {
            next IP;
        }
    }
    print('Good morning!');
}