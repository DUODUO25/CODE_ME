#include <stdio.h>

int main()
{
    /*
    接收用户输入的一个整数month代表月份, 根据月份输出对应的季节
    */
   //1. 提示用户输入一个整数
   printf("Please Enter an Integer betwen 1 and 12:\n");
   //2. 定义变量保存用户输入
   int month;
   //3. 接收用户输入
   scanf("%i",&month);
   //4. 判断月份
    // 3/4/5 Spring 6/7/8 Summer 9/10/11 Autumn 12/1/2 Winter
   if(month > 12 || month < 1){
       printf("Invalid Number!\n");
   }
   else if(month >= 3 && month <= 5){
       printf("Summer!\n");
   }
   else if(month >= 6 && month <= 8){
       printf("Autumn!\n");
   }
   else if(month >= 9 && month <= 11){
       printf("Spring!\n");
   }
   else{
       printf("Winter!\n");
   }
   //5. 输出对应的季节
    return 0;
}