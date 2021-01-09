    use strict;
    use warnings;
    use 5.010;
    use Getopt::Long qw(GetOptions);
    Getopt::Long::Configure qw(gnu_getopt);
    use Data::Dumper;
     
    # my $debug;
    # GetOptions('debug' => \$debug) or die "Usage: $0 --debug\n";
    # say $debug ? 'debug' : 'no debug';

    # my $source_address;
    # GetOptions('from=s' => \$source_address) or die "Usage: $0 --from NAME\n";
    # if ($source_address) {
    #     say $source_address;
    # }

my $debug;
my $source_address = 'Maven';
GetOptions(
    'from|f=s' => \$source_address,
    'debug|d' => \$debug,
) or die "Usage: $0 --debug  --from NAME\n";
 
say $debug ? $debug : 'no debug';
if ($source_address) {
    say $source_address;
}
print Dumper \@ARGV;

# my $hr_options = {verbose => 0};
# say \$hr_options->{verbose};
# GetOptions(
#     'v|verbose+' => \$hr_options->{verbose},
#     'h|help'     => sub {pod2usage('-verbose' => 2, '-exit' => 0)},
# ) or pod2usage;