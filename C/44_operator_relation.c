#include <stdio.h>

int main()
{
    int num = 1;
    // int res = (10 > 11) && (++num > 0);
    // int res = ++num && (10 > 11);
    int res = 10 < 11 || ++num;
    printf("res = %i\n", res);
    printf("num = %i\n", num);
    return 0;
}