#include <stdio.h>

int main()
{
    // double res;
    // res = 10 / 3; // 整数与整数 + - * / 运算, 得到的结果是整数
    // res = 10 / 3.0; // + - * / 运算 小数参与, 得到的结果是小数
    // res = 10.0 / 3;
    // res = 10.0 / 3.0;
    // printf("result = %lf\n",res);
    int result;
    // result = 10 % 3;
    // result = 10 % 3.0;
    // result = 10.0 % 3;
    // result = 2 % 3;
    // result = 0 % -1;
    // result = -2 % 3;
    result = 2 % -3;
    printf("result = %i\n",result);

    return 0;
}