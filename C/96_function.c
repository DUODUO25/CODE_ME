#include <stdio.h>

// int getSum(int a, int b){
//     int res = a + b;
//     return res;
// }
int getSum(int a, int b);
int main()
{
    int num1 = 10;
    int num2 = 20;
    int res = getSum(10, 20);
    printf("res = %i\n", res);
    return 0;
}

int getSum(int a, int b){
    int res = a + b;
    return res;
}