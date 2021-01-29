#include <stdio.h>

int main()
{
    // 交换两个变量, 利用算术运算
    int a = 10;
    int b = 20;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %i, b = %i\n", a , b);
    return 0;
}