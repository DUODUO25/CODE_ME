#include <stdio.h>
int say()
{
    lnj:
    printf("lnj\n");
    return 0;
}

int main()
{
    printf("main\n");
    // goto lnj; // 从main函数到say函数是不可以的说
    return 0;
}