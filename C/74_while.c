#include <stdio.h>

int main()
{
    // 计算 1 + 2 + 3 + ... + n 的和
    // 1. 提示用户输入整数n
    // 2. 定义变量来保存用户输入的整数
    // 3. 接收用户输入的整数
    // 4. 计算 1 + ... + n 的值
    // printf("Enter an integer:\n");
    // int n;
    // scanf("%i",&n);
    // printf("num = %i\n",n);
    // int sum = 0;
    // int i = 1;
    // while(i <= n){
    //     sum += i;
    //     i++;
    // }
    // printf("1 + ... + %i = %i\n",n,sum);
    // 将 1 + 2 + 3 + 4 的和 变量化 的过程即可
    /* 
        规律:
        1. 每一次都是用上一次的和, 加上当前的一个数
        2. 每次被加上的这个数, 是从1开始递增的
        1 + 2 + 3 + 4
        1
        1 + 2
            3 + 3
                6 + 4
                    10
    */
//    // 1. 定义变量保存每次相加的和, 初始时, sum 为 0
//    int sum = 0;
//    // 2. 定义变量保存每次被加上的数
//    int num = 1;
//    // 3. 将上一次的和和被加上的数相加, 将相加的结果保存到和里面
//    sum = sum + num; // 0 + 1
//    // 4. 变化每次被相加的数
//    num++; // 2

//     sum = sum + num; // 1 + 2
//     num ++; // 3
    
//     sum = sum + num; // 3 + 3
//     num ++; // 4

//     sum = sum + num; // 6 + 4
//     num++;
    // int sum = 0;
    // int i = 1;
    // while(i <= n){
    //     sum += i;
    //     i++;
    // }
    // int sum = 0;
    // int num = 1;
    // while(num <= 5){
    //     sum = sum + num;
    //     num++;
    // }

    // printf("sum = %i\n",sum);
    printf("To make the addition 1 + 2 + ... + n , Enter the number n:\n");
    int n;
    scanf("%i",&n);

    int sum = 0;
    int i = 1;
    // 1. while 格式
    // 2. 将重复语句填入{}中
    // 3. 撰写条件
    while(i <= n){
        sum += i;
        i++;
    }
    printf("1+2+3+...+%i = %i", n, sum);
    return 0;
}