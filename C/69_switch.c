#include <stdio.h>

int main()
{
    /* 要求用户输入一个分数, 根据输入的分数输出对应的等级 
        A 90~100 9 10
        B 80~89  8
        C 70~79  70 / 10 = 7;
        D 60~69  60 / 10 = 6; 69 / 10 = 6
        E 0~59 
    */
   // 1. 提示用户输入分数
   printf("Enter a grade, and click ENTER to end the input:\n");
   // 2. 定义一个变量保存用户输入的数据
   int grade;
   // 3. 接收用户输入的数据
   scanf("%i",&grade);
   // 4. 根据输入的分数输出对应的等级
    // if (grade > 100 || grade < 0){
    //     printf("Invalid number\n");
    // }
    // else if(grade >= 90 && grade <= 100){
    //     printf("A\n");
    // }
    // else if(grade >= 80 && grade <= 89){
    //     printf("B\n");
    // }
    // else if(grade >= 70 && grade <= 79){
    //     printf("C\n");
    // }
    // else if(grade >= 60 && grade <= 69){
    //     printf("D\n");
    // }
    // else{
    //     printf("E\n");
    // }
    //  1. 利用grade / 10 的结果来进行判断, 两个int相除, 得到的结果仍然是int, 以此作为依据
    //  2. 利用case的穿透特性, 来进行代码的缩减
    switch(grade / 10) {
        case 10:
        case 9:
            printf("Current grade is %i, equal to A",grade);
        break;
        case 8:
            printf("Current grade is %i, equal to B",grade);
        break;
        case 7:
            printf("Current grade is %i, equal to C",grade);
        break;
        case 6:
            printf("Current grade is %i, equal to D",grade);
        break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("Current grade is %i, equal to E",grade);
        break;
        default:
            printf("Invalid number\n");
        break;
    }
    return 0;
}