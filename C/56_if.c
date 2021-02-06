#include <stdio.h>

int main()
{
    // int age = 17;
    // if (age >= 18) 
    //     printf("Open the network card\n");
    //     printf("Play games\n"); // 不受if控制
    
    // printf("Sell beverages\n");

    // int age = 17;
    // if (age >= 18) 
    //     int num = 666; // 报错, 原因: 作用域冲突, 局部变量的作用域是从定义的那一行开始到遇到} 或 return 为止,
    //                    // 然后 if 不加{} 只能作用于 紧随其后的一条语句, 
    //                    // 由此, 作用域冲突, 产生报错.
    //     printf("Open the network card\n");
    //     printf("Play games\n"); // 不受if控制
    // int age = 19;
    // if (age >= 18) {
    //     printf("Play games\n");
    // }
    // else{
    //     printf("Call back home\n");
    //     printf("Other\n");
    // }
    // int age = 19;
    // if (age >= 18) {
    //     printf("Play games\n");
    // }
    // else
    //     printf("Call back home\n");
    //     printf("Other\n");
    
    // printf("Sell beverages\n");

    int age = 3;
    if (age >= 18) {
        printf("University\n");
    }
    else if(age >= 12) 
        printf("Middle School\n");
        printf("HHHHH\n");
    
    // else if(age >= 6) {
    //     printf("Primary School\n");
    // }
    // else {
    //     printf("Other\n");
    // }

    printf("Last sentence.\n");
    return 0;
}