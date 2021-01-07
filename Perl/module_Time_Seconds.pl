use Time::Seconds;
use Time::Piece;
use DateTime;
use strict;
use warnings;
use feature 'say';

# my $t = localtime;
# $t += ONE_DAY;
 
# my $t2 = localtime;
# my $s = $t - $t2;
 
# print "Difference is: ", $s->days, "\n";

# my $val = Time::Seconds->new(3000);
# print "pretty format is: ", $val->pretty, "\n";
# print "minutes format is: ", $val->minutes, "\n";
 
my $dt = DateTime->new(
    year       => 1964,
    month      => 10,
    day        => 16,
    hour       => 16,
    minute     => 12,
    second     => 47,
    nanosecond => 500000000,
    time_zone  => 'Asia/Taipei',
);

my $dt1 = DateTime->new(
    year       => 2020,
    month      => 10,
    day        => 16,
    hour       => 16,
    minute     => 12,
    second     => 47,
    nanosecond => 500000000,
    time_zone  => 'Asia/Taipei',
);

my $res = $dt->subtract_datetime_absolute($dt1)->seconds();
say 'res is: '. $res;