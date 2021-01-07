use Spreadsheet::WriteExcel;
use strict;
use warnings;
use feature 'say';

my $work_book = Spreadsheet::WriteExcel->new('perl.xls');

my $worksheet = $work_book->add_worksheet();

# $worksheet->write(0,0,'');
# $worksheet->write('A1','Hello Excel!'); # A1 means (0,0)

my $red_background = $work_book->add_format(
    color => 'white',
    bg_color => 'red',
    bold => 1,
);

my $bold = $work_book->add_format(
    bold => 1,
);

$worksheet->write(0,0,'Colored cell',$red_background);
$worksheet->write(0,1,'bold cell',$bold);

my $product_code = '01234';
$worksheet->write_string(0,2,$product_code);
$worksheet->write('A2',37);
$worksheet->write('B2',42);
$worksheet->write('C2','= A2 + B2');
