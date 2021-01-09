use Data::Dumper;
# my $aref = ['x','y'];
# my @a = ($aref, $aref);
# print Dumper(\@a);
# __END__
# $VAR1 = [
#           [
#             'x',
#             'y'
#           ],
#           $VAR1->[0]
#         ];

use Data::Dumper;
my $aref = ['x','y'];
my @a = ($aref, $aref);
$Data::Dumper::Purity=1;
print Dumper(\@a);
__END__
$VAR1 = [
          [
            'x',
            'y'
          ],
          []
        ];
$VAR1->[1] = $VAR1->[0];