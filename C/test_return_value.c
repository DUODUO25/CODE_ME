#include <stdio.h>

int main()
{
    int  a;
    int b;
    a = b = 3;
    printf("return value is %i\n",(a = 3));
    printf("a = %i\n",a);
    return 0;
}