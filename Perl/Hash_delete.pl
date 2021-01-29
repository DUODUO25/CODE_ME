use strict;
use warnings;
use feature 'say';
use Data::Dumper;

my %hash = (
    kkk => 'kkk',
    jjj => 'jjj',
);
my $str = 'kkk';
if (lc('kkk') eq lc($str)) {
    $hash{$str} = $hash{'kkk'};
    delete $hash{'kkk'};
}

delete $hash{kkk};
say Dumper(\%hash);