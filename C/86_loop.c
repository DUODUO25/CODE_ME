#include <stdio.h>

int main()
{
    // 需求: 要求往屏幕上输出 ****
    // 需求: 要求往屏幕上输出三行 ****
    // printf("****\n");
    // for(int i = 0; i < 4; i++){
    //     printf("*");
    // }
    // printf("\n");
    // for(int i = 0; i < 4; i++){
    //     printf("*");
    // }
    // printf("\n");
    // for(int i = 0; i < 4; i++){
    //     printf("*");
    // }
    // printf("\n");
    for(int j = 0; j < 3; j++){ // 外循环控制 行数
        for(int i = 0; i < 4; i++){ // 内循环控制 列数
            printf("*");
        }
        printf("\n");
    }
    return 0;
}