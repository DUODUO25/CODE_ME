#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*
        猜拳游戏规则:
        0代表石头, 1代表剪刀, 2代表布
        电脑             用户(输了)         用户(赢了)
        0代表石头        1代表剪刀          2代表布
        1代表剪刀        2代表布            0代表石头
        2代表布          0代表石头          1代表剪刀

        cm - user
        赢:
        1) 0 - 2 = -2
        2) 1 - 0 = 1
        3) 2 - 1 = 1

        输:
        1) 0 - 1 = -1
        2) 1 - 2 = -1
        3) 2 - 0 = 2

    */
    // 1. 让电脑随机出拳
    srand(time(NULL));
    // 注意点:C语言提供的 rand()函数, 默认是一个伪随机数
    int cm = rand() % 3;
    printf("cm = %i\n", cm);
    // 2. 让用户出拳
    // 2.1 提示用户如何输入
    printf("Enter an integer between 0 and 2, and click ENTER to end\n");
    printf("0 represents Stone, 1 represents scissors, 2 represents cloth\n");
    // 2.2 定义变量保存用户输入
    int user;
    // 2.3 接收用户输入
    scanf("%i",&user);
    // 3. 判断电脑和用户出拳
    // 3.1 排除非法数据
    // if(user > 2 || user < 0)
    // {
    //     printf("Invalid number\n");
    // }
    // else if((0 == cm && 2 == user) || (1 == cm && 0 == user) || (2 == cm && 1 == user))
    // {
    //     printf("Computer is: %i\n", cm);
    //     printf("You Win!");
    // }
    // else if((0 == cm && 1 == user) || (1 == cm && 2 == user) || (2 == cm && 0 == user)){
    //     printf("Computer is: %i\n", cm);
    //     printf("You Lose!");
    // }
    // else{
    //     printf("Computer is the same as you: %i\n",cm);
    //     printf("Tie\n");
    // }
    int tmp = cm - user;
    if(user > 2 || user < 0)
    {
        printf("Invalid number\n");
    }
    else if(1 == tmp || -2 == tmp)
    {
        printf("Computer is: %i\n", cm);
        printf("You Win!");
    }
    else if(-1 == tmp || 2 == tmp)
    {
        printf("Computer is: %i\n", cm);
        printf("You Lose!");
    }
    else
    {
        printf("Computer is the same as you: %i\n",cm);
        printf("Tie\n");
    }

    // 3.2 判断出拳, 输出结果
    return 0;
}