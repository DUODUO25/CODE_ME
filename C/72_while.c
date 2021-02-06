#include <stdio.h>

int main()
{
    // printf("Fire a bullet1\n");
    // printf("Fire a bullet2\n");
    // printf("Fire a bullet3\n");
    // printf("Fire a bullet4\n");
    // printf("Fire a bullet5\n");
    // printf("Fire a bullet6\n");
    // printf("Fire a bullet7\n");
    // printf("Fire a bullet8\n");
    // printf("Fire a bullet9\n");
    // printf("Fire a bullet10\n");
    // 1. 先把while循环的格式写上
    // 2. 将需要重复执行的代码放入{}中
    // 3. 定义循环条件
    int i = 1;
    while(i <= 20) {
         printf("Fire a bullet%i\n",i);
         i++;
    }
    return 0;
}