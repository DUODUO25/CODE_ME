#include <stdio.h>

int main()
{
    // 接收用户输入的1~7的整数, 根据用户输入的整数, 输出对应的是星期几
    //1. 提示用户进行输入
    printf("Please enter an Integer betwen 1 and 7:\n");
    //2. 定义变量接收用户输入
    int num;
    //3. 接收用户输入
    scanf("%i",&num);
    //4. 进行判断, 如果是几, 就输出星期几
    // if(1 == num){
    //     printf("Monday\n");
    // }
    // else if(2 == num){
    //     printf("Tuesday\n");
    // }
    // else if(3 == num){
    //     printf("Wednesday\n");
    // }
    // else if(4 == num){
    //     printf("Thursday\n");
    // }
    // else if(5 == num){
    //     printf("Friday\n");
    // }
    // else if(6 == num){
    //     printf("Saturday\n");
    // }
    // else if(7 == num){
    //     printf("Sunday\n");
    // }
    // else {
    //     printf("Illegal Number, not an integer from 1~7\n");
    // }
    if(num > 7 || num < 1){
        printf("Illegal Number, not an integer from 1~7\n");
    }
    else if(1 == num){
        printf("Monday\n");
    }
    else if(2 == num){
        printf("Tuesday\n");
    }
    else if(3 == num){
        printf("Wednesday\n");
    }
    else if(4 == num){
        printf("Thursday\n");
    }
    else if(5 == num){
        printf("Friday\n");
    }
    else if(6 == num){
        printf("Saturday\n");
    }
    else{
        printf("Sunday\n");
    }

    return 0;
}