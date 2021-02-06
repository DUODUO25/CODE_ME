#include <stdio.h>

int main()
{
    // 需求: 要求判断用户输入的一个整数是否是100-200之间的整数
    // 1. 提示用户输入一个100-200之间的整数
    printf("Enter an integer between 100 and 200, ending with ENTER:\n");
    // 2. 定义变量保存用户的输入
    int num;
    // 3. 接收用户的输入
    scanf("%i",&num);
    printf("num = %i\n", num);
    // 4. 判断并输出结果
    // 4.1 排除非法数据
    // if 更适合对区间进行判断, switch更适合对固定的几个值进行判断
    // 但是switch能做的, if 都能做, 所以在企业开发中, 能用 if 就用 if
    // if(num > 200 || num < 100){
    //     printf("Invalid!\n");
    // }
    // else{
    //     printf("the num %i is between 100 and 200\n",num);
    // }
    // 4.2 判断需求区间内的数据
    // switch(num / 100) {
    //     case 1:
    //         printf("the num %i is between 100 and 200\n",num);
    //     break;
    // }
    // switch(num){
    //     case 200:
    //         printf("the num %i is between 100 and 200\n",num);
    //     break;
    // }
    return 0;
}