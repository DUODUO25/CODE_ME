#include <stdio.h>
int call() {
    val = 999;
    printf("val = %i\n", val);
    return 0;
}
int val; //全局变量

int main() {
    /* 
    1. 局部变量
       定义在大括号中的变量, 我们称之为局部变量
    2. 全局变量
       定义在大括号外的变量, 我们称之为全局变量 
       全局变量的作用域: 从定义变量的那一行开始, 到文件末尾
    */

   // 作用域, 变量的有效范围
    /*
    // int num; // 局部变量, 作用域, 从定义变量的那一行开始, 直到遇到return 或者 遇到 } 为止
    // num = 10;
    // printf("num = %i",num);
    // {
    //     int num = 998;
    //     printf("num = %i\n",num);
    // }
    // printf("num = %i\n",num);*/
    val = 666;
    printf("value = %i\n",val);
    call();
    return 0; // 结束函数, main函数被终止.即将函数对应的存储空间释放掉
    // num = 10;
    // printf("num = %i",num);
}