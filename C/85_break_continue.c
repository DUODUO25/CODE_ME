#include <stdio.h>

int main()
{
    // for(int i = 0; i < 2; i++){
    //     printf("Outer loop here %i\n",i);
    //     for(int j = 0; j < 3; j++){
    //         printf("Inner loop here %i\n",j);
    //     }
    // }
    // for(int i = 0; i < 2; i++){
    //     printf("--------------------Outer loop here %i\n",i);
    //     for(int j = 0; j < 3; j++){
    //         printf("Inner loop here %i\n",j);
    //         break;
    //     }
    // }
    for(int i = 0; i < 2; i++){
        printf("--------------------Outer loop here %i\n",i);
        for(int j = 0; j < 3; j++){
            if(j == 1){
                continue;
            }
            printf("Inner loop here %i\n",j);  
        }
    }
    return 0;
}