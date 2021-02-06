#include <stdio.h>

int main()
{
    // int age = 17;
    // // 分号是一条空语句, if() 后面不用编写分号, 因为分号也是一条语句, 就相当于, 省略大括号的写法, 于是就只控制紧随其后的那条语句 ; 空语句
    // if(age >= 18 );
    // // {} 单独出现, 我们称之为代码块
    // {
    //     printf("Uni!\n");
    //     int num = 666;
    //     // printf("num = %i\n",num);
    // }
    // //printf("num = %i\n",num);

    // printf("Last\n");
    // if(1) {
    //     printf("hhhh\n");
    // }
    // if (666) {
    //     printf("hhhh\n");
    // }
    // if (0) {
    //     printf("hhhh\n");
    // }
    // ""是真
    // if ("") {
    //     printf("hhhh\n");
    // }
    // printf("ggggg\n");
    // int age = 16;
    // if(age == 18){
    //     printf("ONC\n");
    // }
    // else {
    //     printf("O\n");
    // }
    // 18 = age 这样的话, 会进行报错, 因为不可以给一个常量赋值
    // if(18 == age){
    //     printf("ONC\n");
    // }
    // else {
    //     printf("O\n");
    // }
    if(1){
        if(0){
            printf("A\n");
        }
        else{
            printf("B\n");
        }
    }
    else{
        if(0){
            printf("C\n");
        }
        else{
            printf("D\n");
        }
    }
    return 0;
}