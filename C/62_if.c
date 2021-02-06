#include <stdio.h>

int main()
{
    /*
    接收用户输入的三个整数, 排序后输出

    5, 3, 2 按照升序排序
    */
    // 1. 提示用户输入三个整数
    printf("Enter 3 integers, using comma as a delimiter, End it by click ENTER:\n");
    // 2. 定义变量保存用户输入的整数
    int a, b, c;
    // 3. 接收变量
    scanf("%i,%i,%i",&a,&b,&c);
    printf("a = %i, b = %i, c = %i\n", a, b, c);
    // 4. 排序输出
    if(a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    if(b > c){
        // int tmp = b;
        // b = c;
        // c = tmp;
        int tmp = c;
        c = b;
        b = tmp;
    }
    if(a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    printf("a = %i, b = %i, c = %i\n", a, b, c);
    return 0;
}