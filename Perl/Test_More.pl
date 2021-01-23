    use strict;
    use warnings;
     
    use lib 'lib';
     
    use Test::More;
    
    my @modules = qw(Data::Dumper Test::Exception);
    for my $module (@modules) {
        last if $module eq 'Test::Exception';
        use_ok($module);
    }
    done_testing;


__END__

 https://perlmaven.com/done-testing

    The difference is that in this case we explicitely need to tell the testing environment that we have finished all the tests. This means if we exit() early, even the line immediately before done_testing() we won't get the plan printed at the end, instead we'll have a comment: 
