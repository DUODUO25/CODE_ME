use Carp;

sub INT_handler {
    print("Don't Interrupt!\n");
}

$SIG{'INT'} = 'INT_handler'; #another way is $SIG{'INT'} = \&amp;INT_handler ;

for ($x = 0; $x < 10; $x++) {
    print("$x\n");
    sleep 1;
}
 $SIG{__DIE__}  = sub { confess "Error occurred when connecting to Vcenter: " . join '', map {$_.''} @_ };
 die 'die directly';