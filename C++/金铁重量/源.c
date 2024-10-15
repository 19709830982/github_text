#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define PI 3.1415926
#define IR 7.86 // ���ı���
#define IG 19.3 // ��ı���

int main() {
    double diameter, height, radius, volume, iron_weight, gold_weight;

    // ��ȡ����

    scanf("%lf", &diameter);

    scanf("%lf", &height);

    // ����뾶
    radius = diameter / 2;

    // �������
    volume = (PI * pow(radius, 2) * height) / 3;

    // ��������
    iron_weight = volume * IR / 1000; // ת��Ϊǧ��
    gold_weight = volume * IG / 1000; // ת��Ϊǧ��

    // ������
    printf("%.3f %.3f\n", iron_weight, gold_weight);

    return 0;
}