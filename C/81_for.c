#include <stdio.h>

int main()
{
    // 局部变量的作用域
    // int num = 666;
    // {
    //     // int num = 777; // 不同作用域中可以出现同名的局部变量
    //     printf("{}num = %i\n",num); // 777 , 访问的原则是就近原则, 只要是不同的作用域, 是可以出现同名的变量的
    // }
    // printf(" num = %i\n", num); // 666
    // 注意点:for 循环的{}中可以定义和()中同名的变量, 会打出10次666, 因为for的{}每次执行到}完毕,内存空间就会被释放掉, num++ 只会去调用在()里面num
    // for(int num = 1;num <= 10;num++){
    //     int num = 666;
    //     printf("num = %i\n",num); // 666
    // }
    // for(int num = 1;num <= 10;){
    //     int num = 666;
    //     printf("num = %i\n",num); // 666
    // }
    //注意点: for 循环()无法访问for循环{}里面的变量, 因为执行顺序是
    for(int num = 1;num <= 10;cnt++){
        int cnt = 666;
        printf("num = %i\n",num); // 666
    }
    return 0;
}