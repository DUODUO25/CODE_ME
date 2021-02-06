#include <stdio.h>

int main()
{
    /* 
        switch 选择结构
    */
    int day = 3;
    switch(day){
        case 1: // day == 1
            printf("Monday\n");
            break;
        case 2: // day == 2
            printf("Tuesday\n");
            break;
        default: // else
            printf("Other\n");
            break;
    }

    return 0;
}