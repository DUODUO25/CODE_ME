#include <stdio.h>
#include <time.h>


int main()
{
    clock_t start_time, end_time;
    start_time = clock();   //获取开始执行时间
    /*
    简单的赋值运算符
    */
    // int num;
    // num = 6;
    // printf("number = %i\n", num);
    // int num = 5;
    // num += 10; // num = num + 10;
    // printf("num = %i\n",num);
    // int num;
    // num = 5;
    // num = num + 1;
    // printf("num = %i\n",num);

    // int val = 5;
    // val += 1;
    // printf("val = %i\n", val);

    // int num1 = 5;
    // num1++;
    // printf("num1 = %i\n", num1);

    int num = 5;
    int res;
    // res = 1+num; num++;
    res = 1 + num++; 
    printf("res = %i\n", res);
    printf("num = %i\n", num);
    
    int res1;
    int num1 =5;
    // ++num1; res1 = 1 + num1;
    res1 = 1 + ++num1;
    printf("res1 = %i\n",res1);
    printf("num1 = %i\n",num1);
    end_time = clock();     //获取结束时间
    double Times = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("%f seconds\n", Times);
    return 0;
}