use strict;
use warnings;
use feature 'say';
use Data::Dumper;
use Data::Dump::Streamer;

# my $code_ref = sub {print "hello world\n"};
# $Data::Dumper::Deparse=1;
# print Dumper $code_ref;
my $code_ref = sub {print "hello world\n"};
print Dump $code_ref, "\n";
__END__
$VAR1 = sub { "DUMMY" };

$VAR1 = sub {
            use warnings;
            use strict;
            use feature 'say';
            print "hello world\n";
        };