#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a;
    srand((unsigned int)time(NULL));
    for(size_t i = 0; i < 10; i++){
        a = rand();
        printf("%d  ",a);
    }
}