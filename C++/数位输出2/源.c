#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, digit1, digit2, digit3;
    char buffer[12]; // ���ڸ�ʽ�����

    // ��ȡ�û��������λ���������Է���
 
    scanf("%d", &num);

    // ȡ����ֵ��ȷ�������������
    num = abs(num);

    // ��ȡ��λֵ
    digit1 = num / 100;
    digit2 = (num % 100) / 10;
    digit3 = num % 10;

    // ���մӸߵ���˳�����
    printf("%d %d %d\n", digit1, digit2, digit3);

    // ���մӵ͵���˳�������ע���ʽ���Ա�����λ����ʽ
    sprintf(buffer, "%d %d %d", digit3, digit2, digit1);
    if (digit1 == 0) { // ����ǰ������������003
        if (digit2 == 0) {
            printf("%s\n", buffer + 2); // ������һλ
        }
        else {
            printf("%s\n", buffer + 1); // ��������λ
        }
    }
    else {
        printf("%s\n", buffer); // ���������λ
    }

    return 0;
}