use strict;
use warnings;

my $module = "GMP::XXX";
my $identifier = qr/[A-Za-z_][A-Za-z0-9_]*/;
die  'invalid module name: '.$module
      unless $module =~ /^$identifier (?: :: $identifier )* $/x;
print($module);