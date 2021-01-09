use strict;
use warnings;
use feature 'say';
use Data::Dumper;
my $hash = {timetracking => undef};
if (exists $hash->{timetracking}->{hhh}) {
    say 'hhh';
}
else {
    say 'kkk';
}

if (exists $hash->{timetracking}) {
    say 'hhh';
}
else {
    say 'kkk';
}