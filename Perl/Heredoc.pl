
#!/usr/bin/perl
 
$a = 10;
$var = <<"EOF";
This is a here doc example1
e.g. a = $a
EOF
print "$var\n";
 
$var = <<'EOF';
This is a here doc example2
e.g. a = $a
EOF
print "$var\n";

$var = << "END";
This is a here doc example3
e.g. a = $a
END

print "$var\n";

__END__

    1.必须后接分号，否则编译通不过。
    2.END可以用任意其它字符代替，只需保证结束标识与开始标识一致。
    3.结束标识必须顶格独自占一行(即必须从行首开始，前后不能衔接任何空白和字符)。
    4.开始标识可以不带引号号或带单双引号，不带引号与带双引号效果一致，解释内嵌的变量和转义符号，带单引号则不解释内嵌的变量和转义符号。
    5.当内容需要内嵌引号（单引号或双引号）时，不需要加转义符，本身对单双引号转义，此处相当与q和qq的用法。

    Here文档又称作heredoc、hereis、here-字串或here-脚本，
    是一种在命令行shell（如sh、csh、ksh、bash、PowerShell和zsh）
    程序语言（像Perl、PHP、Python和Ruby）里定义一个字串的方法。