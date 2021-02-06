#include <stdio.h>

int main()
{
    // 从键盘输入一个整数, 判断其是否是偶数, 如果是偶数, 输出YES, 否则输出NO
    //1. 提示用户输入
    printf("Please Enter an Integer:\n");
    //2. 定义变量保存用户输入
    int num;
    //3. 接收用户输入
    scanf("%i",&num);
    //4. 判断是否是偶数
    //5. 根据判断结果, 输出YES / NO
    // if(0 == num % 2){
    //     printf("YES!\n");
    //     num = 1;
    // }
    // else{
    //     printf("NO!\n");
    //     num = 0;
    // }
    // printf("num = %i\n",num);
    num % 2 == 0 ? printf("YES\n"),num=0 : printf("NO\n"),num = 1;
    printf("num = %i\n",num);
    return 0;
}