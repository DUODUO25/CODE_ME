#!perl -T
use Test::More tests=>1;

BEGIN {
    my @classes = qw(Animal Cow Sheep Horse Mouse);
    use Test::More scalar @classes;

    foreach my $class (@classes) {
        use_ok( $class ) or print "Bail out! $class did not load!\n";
    }
}