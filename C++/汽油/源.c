#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ����Բ�������
double cylinderVolume(double R1, double H1) {
    return 3.1415926 * R1 * R1 * H1/4;
}

// ����Բ׶�����
double coneVolume(double R2, double H2) {
    return (1.0 / 3.0) * 3.1415926 * R2 * R2 * H2/4;
}

int main() {
    double R1, H1, R2, H2;
    double cylinderVol, coneVol, totalVol, oilWeight;

    // ����Բ�����Բ׶��ĳߴ�
    scanf("%lf %lf %lf %lf", &R1, &H1, &R2, &H2);

    // �������
    cylinderVol = cylinderVolume(R1, H1);
    coneVol = coneVolume(R2, H2);
    totalVol = cylinderVol - coneVol; // ע����Բ���������ȥԲ׶�����

    // �����ſ����͵�����
    oilWeight = totalVol * 0.785; // ���͵ı���Ϊ0.785g/cm?

    // ������������1λС��
    printf("%.1lf %.1lf\n", totalVol, oilWeight);

    return 0;
}