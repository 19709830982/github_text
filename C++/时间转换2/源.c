#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int seconds, days, hours, minutes, remaining_seconds;

    // ��ȡ�û����������

    scanf("%d", &seconds);

    // ��������
    days = seconds / (24 * 60 * 60);
    remaining_seconds = seconds % (24 * 60 * 60);

    // ����Сʱ��
    hours = remaining_seconds / (60 * 60);
    remaining_seconds = remaining_seconds % (60 * 60);

    // ���������
    minutes = remaining_seconds / 60;
    remaining_seconds = remaining_seconds % 60;

    // ������
    printf("%d %d %d %d\n", days, hours, minutes, remaining_seconds);

    return 0;
}