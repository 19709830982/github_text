#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // ������ѧ��ͷ�ļ���ʹ��sqrt����

int main() {
    int a, b;
    float CL, tD, SP;

    // ��ȡ����

    scanf("%d %d", &a, &b);

    // ����ģ�Ͳ���
    CL = a + sqrt((float)b * a + 1); // ע�⽫b*aת��Ϊdouble�����Ա�����������
    tD = a * pow(CL + b,2); // ���ݲ�ȫ�Ĺ�ʽ����t0
    SP = tD * CL + b * b;

    // ��������������λС��
    printf("CL=%.2f tD=%.2f SP=%.2f\n", CL, tD, SP);

    return 0;
}