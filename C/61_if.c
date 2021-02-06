#include <stdio.h>

int main()
{
    /* 
        接收用户输入的三个整数, 排序后输出 
        5, 3, 2 按照升序排序
    */
   // 1. 提示用户输入三个数字
   printf("Please Enter 3 Integers, comma as delimiter:\n");
   // 2. 定义三个变量保存用户输入的数据
   int a , b , c;
   // 3. 接收用户输入的数据
   scanf("%i,%i,%i",&a,&b,&c);
   printf("a = %i, b = %i, c = %i\n", a, b, c);
   // 4. 排序后输出
   // 1) 排序
   // i) 定义临时变量
//    int tmp;
//    // ii) 保证a保存最小的数, a > b, 即进行 a, b交换
//    if(a > b) {
//        tmp = a;
//        a = b;
//        b = tmp;
//    }

//    if (a > c) {
//        tmp = a;
//        a = c;
//        c = tmp;
//    }
//    // iii) 经过比较和交换, 此时a已经是最小的数, 再进行b, c的比较, 如果b>c, 就进行交换
//    if (b > c) {
//        tmp = b;
//        b = c;
//        c = tmp;
//    }
// 4.1 用a和b比较, 如果a>b, 交换a和b
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    // 4.2 用a和c比较, 如果a>c, 交换a和c
    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }
    // 4.3 用b和c比较, 如果b>c, 交换b和c
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
   printf("a = %i, b = %i, c = %i\n", a, b, c);

    return 0;
}