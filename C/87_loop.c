#include <stdio.h>

int main()
{/*
    需求: 打印图形
    **** 0 4
    ***  1 3
    **   2 2
    *    3 1
       */
    // printf("****\n");
    // printf("***\n");
    // printf("**\n");
    // printf("*\n");
    // for(int i = 0;i<4;i++){
    //     // i = 0  4-i = 4  j < 4      0 1 2 3
    //     // i = 1  4-i = 3  j < 3      0 1 2
    //     for(int j = 0; j < 4-i; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    /*
    ****
    ****
    ****
    ****
    */
//    int cnt = 0;
//    for(int i = 0; i < 4; i++){
//        for(int j = cnt; j < 4; j++){
//            printf("*");
//        }
//        cnt++;
//        printf("\n");
//    }
    // int cnt = 4;
    // for(int i = 0;i < 4;i++){
    //     for(int j = 0;j < cnt;j++){
    //         printf("*");
    //     }
    //     cnt--;
    //     printf("\n");
    // }
   for(int i = 0; i < 4; i++){
       for(int j = i; j < 4; j++){
           printf("*");
       }
       printf("\n");
   }
    return 0;
}