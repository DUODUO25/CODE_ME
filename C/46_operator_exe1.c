#include <stdio.h>

int main()
{
    /* 
    1. 从键盘输入一个整数
        1) 提示用户输入
        2) 定义一个变量保存用户输入的整数
        3) 接收用户输入的整数
        4) 判断用户输入的数是否属于相应区间
        5) 输出判断的结果
    2. 判断这个整数是否是100到200之间的数
    */
   //  1) 提示用户输入
    printf("Please enter an Integer:\n");
    // 2) 定义一个变量保存用户输入的整数
    int num;
    // 3) 接收用户输入的整数
    scanf("%i",&num);
    // 4) 判断用户输入的数是否属于相应区间
    // 5) 输出判断的结果
    // if (num >= 100 && num <= 200) {
    //     printf("The integer is between 100~200");
    // }
    // else {
    //     printf("The integer is out of range 100~200");
    // }
    int res = num >= 100 && num <= 200;
    res ? printf("The integer is between 100~200\n") : printf("The integer is out of range 100~200\n");
    return 0;
}