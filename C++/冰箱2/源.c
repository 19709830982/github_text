#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int h, m; // ����Сʱ�ͷ���
    double t, T; // ʱ����¶ȱ���

    // ��ʾ�û��������ϵ�󾭹���ʱ��

    scanf("%d %d", &h, &m);

    // ������ת��ΪСʱ��������ʱ��
    t = h + (double)m / 60;

    // ���ݹ�ʽ�����¶�
    T = 4 * t * t/(t+2) - 20;

    // ���������
    printf("%.2f\n", T);

    return 0;
}