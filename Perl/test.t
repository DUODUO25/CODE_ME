use Test::More;
use Test::Number::Delta;
is(sqrt(0),0,'the square root of 0 is 0');
my $product = sqrt(7) * sqrt(7);
ok($product>6.99 && $product < 7.001, "The product [$product] is around 7");
my $n = -1;
eval {sqrt($n)};
ok($@,'$@ is set for sqrt(-1)');

eval {sqrt(undef)};
is($@,'','$@ is set after sqrt(undef)');

is(sqrt,0,'sqrt() works on $_ (undefined) by default');

$_ = 100;
is(sqrt,test(),'sqrt() works on $_ by default');

is(sqrt(10 ** 100),10**50,'sqrt can handle a googol');

sub test {
    return 1;
}

done_testing();