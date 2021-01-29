use strict;
use warnings;
use feature 'say';
use Data::Dumper;

my %hash = (
    kkk => 'jjj',
    qqq => 'ttt',
);

while ( my ($key, $value) = each %hash) {
    say $key, $value;
}