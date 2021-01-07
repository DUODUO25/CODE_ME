use warnings;

my @a;
{
    no warnings qw(void);
    my $b = @a[0];
}

my $c = @a[0];