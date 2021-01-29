#include <stdio.h>

int main()
{
    /*
    有两个变量 a, b
    a = 10, b = 20 
    要求用两种方式交换两个变量中保存的值 
    */
    // // 1. 定义两个变量
    // int a = 10, b = 20;
    // printf("Before: a = %i, b = %i\n", a , b);
    // // 2. 定义一个临时变量
    // int tmp;
    // // 3. 将变量a 的值复制到临时变量中
    // tmp = a;
    // // 4. 将变量b的值赋值到a中
    // a = b;
    // // 5. 将tmp的值赋值到b中
    // b = tmp;
    // printf("After: a = %i, b = %i\n", a , b);

    // int a = 10;
    // int b = 20;
    // int c = a;
    // int d = b;
    // b = c;
    // a = d;
    // printf("a = %i, b = %i\n", a, b);

    int a = 10;
    int b = 20;
    int tmp = a;
    a = b;
    b = tmp;
    printf("After: a = %i, b = %i\n", a, b);
    
 
    return 0;
}