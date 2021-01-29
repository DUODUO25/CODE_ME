#include <stdio.h>

int main()
{
    // 表达式 6==6==6 的值是多少?
    //  6 == 6 返回值 1
    //  1 == 6 返回值 0
    int res = 6 == 6 == 6;
    printf("res = %i\n",res);
    return 0;
}