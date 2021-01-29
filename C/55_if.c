#include <stdio.h>

int main()
{
    int age = 3;
    if (age >= 18) {
        printf("University\n");
    }
    else if(age >= 12) {
        printf("Middle School\n");
    }
    else if(age >= 6) {
        printf("Primary School\n");
    }
    else {
        printf("Other\n");
    }

    printf("Last sentence.\n");
    return 0;
}