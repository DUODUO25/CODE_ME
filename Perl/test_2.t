use strict;
use warnings;
use Test::Exception;
use Test::More;

sub div {
    my ( $a, $b ) = @_;
    return $a / $b;
};

sub test {
    die 'Error!';
}

throws_ok{test()}qr/Error/,'Error';
dies_ok { div( 1, 0 ) } 'divide by zero detected';
 
# or if you don't like prototypes
dies_ok( sub { div( 1, 0 ) }, 'divide by zero detected' );

done_testing();