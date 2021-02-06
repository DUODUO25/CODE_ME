#include <stdio.h>
int getSum(int a, int b){
    int res = a + b;
    return res;
}
int main()
{
    // 需求: 要求求两个变量的和
    int num1 = 20;
    int num2 = 30;
    // int res = num1 + num2;
    int res = getSum(num1, num2);
    printf("res = %i\n",res);

    int num4 = 20;
    int num3 = 40;
    int res2 = getSum(num3,num4);
    printf("res2 = %i\n",res2);

    return 0;
}