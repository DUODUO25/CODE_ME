#include <stdio.h>

int main() {
    // 先定义, 再初始化
    int num, value;
    num = 3;
    value = 3;

    // 定义的同时初始化
    int num1 = 2;

    // 完全初始化
    int num2 = 3, value1 = 3;

    // 部分初始化
    int num3 = 3, val2;
    return 0;
}