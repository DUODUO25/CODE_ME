use strict;
use warnings;
use feature 'say';
use Data::Dumper;

sub test {
    say 'default Dumper: '.Dumper(\@_);
    my $str = shift;
    say 'firstly shift '.$str;
    say 'default Dumper again: '.Dumper(\@_);
    my $content;
    $content = shift if @_ and ref $_[0];
    my ($k,$v) = splice(@_, 1, 2);
    say 'key is: '.$k;
    say 'value is: '.$v;
    say 'default Dumper last: '.Dumper(\@_);

}

test 'pp',content=>'bar',content_type => 'foo';