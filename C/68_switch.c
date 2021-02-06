#include <stdio.h>

int main()
{
    // int day = 1;
    //1.  switch 中 case 后面的值不能重复
    // switch(day){
    //     case 1:
    //         printf("Mon\n");
    //     break;
    //     case 1:
    //         printf("Tue\n");
    //     break;
    //     case 3:
    //         printf("Wed\n");
    //     break;
    //     default:
    //         printf("Other\n");
    //     break;
    // }

    // 2. 
    // int day = 3.3;
    // int a = 4, b = 6.7;
   // switch(day){// 变量
   // switch(2){// 常量
//    switch(1-1){ //表达式
//    switch(b-a){ 
    // switch(3.14 + 1){
    //     case 1:
    //         // int num = 2;
    //         printf("M\n");
    //     break;
    //     case 2:{
    //         int num = 2;
    //         printf("T\n");
    //         break;
    //     }     
    //     default:;
    //         int num = 3;
    //         printf("O\n");
    //     break;
    // }
    int day = 3.3;
    int num = 3;
    switch(day){
        case 1:
            printf("Mon\n");
        break;
        case 1 + 1:
            printf("Tue\n");
        break;
        // case num: // 变量
        //     printf("Wed\n");
        // break;
        // case 3.14: // 小数
        // case 1.1 + 1: // 返回小数的常量表达式
        case 3:
            printf("Wed\n");
        break;
        default:
            printf("Other\n");
        break;
    }
    return 0;
}