#include <stdio.h>

int main()
{
    /* 实现 + - * / 简单计算器 */
    // 1. 提示用户输入操作数和操作符号
    printf("Enter the operands and operator: e.g. 1+1\n");
    // 2. 定义变量保存输入的操作数和操作符号
    int num1, num2;
    char operator;
    // 3. 接收用户输入的操作数和操作符号
    scanf("%i%c%i",&num1, &operator, &num2);
    printf("num1 = %i, operator = %c, num2 = %i\n", num1, operator, num2);
    // 4. 根据操作数和操作符号进行对应的运算
    switch(operator){
        case '+':
        printf("%i + %i = %i", num1, num2, num1+num2);
        break;
        case '-':
        printf("%i - %i = %i", num1, num2, num1-num2);
        break;
        case '*':
        printf("%i * %i = %i", num1, num2, num1*num2);
        break;
        case '/':
        printf("%i / %i = %i", num1, num2, num1/num2);
        break;
        default:
        printf("No such functions now");
        break;
    }
    return 0;
}