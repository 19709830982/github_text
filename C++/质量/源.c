#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��������ĺ���
float calculateVolume(float length) {
    return length * length * length;
}

// ���������ĺ���
float calculateMass(float volume, float density) {
    return volume * density;
}

int main() {
    float length;
    float volume;
    float goldMass, silverMass, copperMass;

    // ����߳�

    scanf("%f", &length);

    // �������
    volume = calculateVolume(length);

    // ���������ͭ������
    goldMass = calculateMass(volume, 19.32); // ����ܶȣ�19.32 g/cm^3
    silverMass = calculateMass(volume, 10.53); // �����ܶȣ�10.49 g/cm^3
    copperMass = calculateMass(volume, 8.9); // ͭ���ܶȣ�8.94 g/cm^3

    // ������
    printf("%.2f\n", goldMass);
    printf("%.2f\n", silverMass);
    printf("%.2f\n", copperMass);

    return 0;
}