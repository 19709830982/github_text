#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, digit1, digit2, digit3;
    char buffer[12]; // 用于格式化输出

    // 读取用户输入的三位整数，忽略符号
 
    scanf("%d", &num);

    // 取绝对值以确保处理的是正数
    num = abs(num);

    // 提取数位值
    digit1 = num / 100;
    digit2 = (num % 100) / 10;
    digit3 = num % 10;

    // 按照从高到低顺序输出
    printf("%d %d %d\n", digit1, digit2, digit3);

    // 按照从低到高顺序输出，注意格式化以保持三位数格式
    sprintf(buffer, "%d %d %d", digit3, digit2, digit1);
    if (digit1 == 0) { // 处理前导零的情况，如003
        if (digit2 == 0) {
            printf("%s\n", buffer + 2); // 输出最后一位
        }
        else {
            printf("%s\n", buffer + 1); // 输出最后两位
        }
    }
    else {
        printf("%s\n", buffer); // 正常输出三位
    }

    return 0;
}