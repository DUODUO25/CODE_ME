#include <stdio.h>

int main()
{
    /*
        用户从键盘上输入三个整数
        找出最大值
        然后输出最大值
    */

    // // 1. 提示用户输入三个整数
    // printf("Please enter 3 integers with the enter as the delimiter: \n");
    // // 2. 定义变量接收数据
    // int num1, num2, num3;
    // // 3. 接收数据
    // scanf("%i%i%i",&num1,&num2,&num3);
    // // 4. 找出最大值
    // int max;
    // max = num1;
    // if(num2 > max) {
    //     max = num2;
    // }
    // if(num3 > max) {
    //     max = num3;
    // }
    // // 5. 输出最大值
    // printf("max = %i\n",max);

    // 1. 提示用户输入三个整数
    printf("Please enter 3 Integers with comma as delimiter and with Enter for the end\n");
    // 2. 定义三个变量保存数据
    int num1, num2, num3;
    // 3. 接收数据
    scanf("%i,%i,%i",&num1,&num2,&num3);
    // 4. 找出某两个整数中的最大值
    int temp;
    temp = num1 > num2 ? num1 : num2;
    // 5. 利用找出的最大值再和第三个整数进行比较
    int max;
    max = temp > num3 ? temp : num3;
    // 6. 输出结果
    printf("max = %i\n",max);
    return 0;
}