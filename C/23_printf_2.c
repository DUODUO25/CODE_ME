#include <stdio.h>

int main()
{
    // printf 函数
    /*
    宽度:
    1. 格式:
    %[输出宽度]数据类型
    2. 作用
    指定输出内容的位数
    */
//    int num = 999;
//    printf("|%i|\n",num);
//    printf("|%1i|\n",num);
//    printf("|%3i|\n",num);
//    printf("|%5i|\n",num);
/* 标志格式
%[标志][输出宽度]数据类型
%[标志]数据类型
标志: 
 - 0 多出来的位数补零
 - + 大于等于0的数前面加上+符号,显示正负号, 0的话, 会显示+0
 - 空格 多出来的位数补上空格,默认就是空格
 - - 右对齐格式
*/
    int num = 0;
    printf("%+i\n",num);
    // printf("%i\n",num);

    // printf("% i\n",num);
    // printf("%i\n",num);
    // printf("|% -5i|\n",num);
    // printf("|%-5i|\n",num);
    // printf("|%5i|\n",num);
    // printf("|%-5i|\n",num);
    // printf("|%+05i|\n",num);
    // printf("|%-05i|\n",num);
    // printf("|%0+5i|\n",num);
    // printf("|%03i|\n",num);
    return 0;
}