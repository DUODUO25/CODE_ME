#include <stdio.h>
int getAge(){
    return 18;
}
int getSum(int a, int b){
    int res = a + b;
    return res;
}
void say(int age){
    printf("%i\n",age);
}

int test1(){
    return 666;
}

float test2(){
    return 1.1123456789f;
}

double test3(){
    return 3.141518765234;
}

char test4(){
    return 'a';
}

int main()
{
    printf("Age is %i\n", getAge());
    printf("Sum is %i\n", getSum(10, 20));
    say(19);
    printf("%i\n",test1());
    printf("%.9f\n",test2());
    printf("%.9lf\n",test3());
    printf("%c\n",test4());
    return 0;
}