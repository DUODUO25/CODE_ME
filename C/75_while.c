#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /* 获取 1~100 之间 7 的倍数的个数 */
    // 1. 获取1~100之间的整数 
    // srand(time(NULL));
    // int num = rand()%100 + 1;// max - min + 1 [0,max-min] [0+min, max-min+min] [min, max]
    // rand%x [0,x-1] [a,b]  [0+a,b-a+a] rand()%(b-a+1) [0,b-a]+a =>  [a,b]
    // printf("num = %i\n",num);
    // 规律: 7 14 21 28 35 42 49 56 63 % 7 == 0
    // num = 1;
    // num % 7 , if ( 0 == num % 7) printf num
    // num++
    int num = 1;
    int cnt = 0;
    printf("In range 1~100, the multiples which can be divided by 7:\n");
    while(num<=100){
        if(0 == num % 7){
            printf("%i ",num);
            cnt++;
        }
        num++;
    }
    printf("\nThe total number of the multiples is %i\n",cnt);
    return 0;
}