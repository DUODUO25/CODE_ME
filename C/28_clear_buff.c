#include <stdio.h>

int main()
{
    int num1;
    printf("2Enter num1:\n");
    scanf("%i",&num1);
    // fflush(stdin); //清空输入缓冲区, 仅适用于windows环境
    // setbuf(stdin,NULL); // 可跨平台, 适用Linux, Windows, Mac系统
    rewind(stdin);
    printf("num1 = %i\n",num1);
    // fflush(stdin);

    char ch;
    printf("2Enter char:\n");
    scanf("%c",&ch);
    // fflush(stdin); 
    // setbuf(stdin,NULL);
    printf("char = %c\n",ch);
    // fflush(stdin); 
    // setbuf(stdin,NULL);
    rewind(stdin);
    
    int num2;
    printf("3Enter num2:\n");
    scanf("%i",&num2);
    rewind(stdin);
    // setbuf(stdin,NULL);
    printf("num2 = %i\n",num2);
    //  setbuf(stdin,NULL);

    return 0;
}