#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int isVIP, totalAmount;
    scanf("%d %d", &isVIP, &totalAmount);

    double discount = 1.0;  // ��ʼ���ۿ�Ϊ1.0����ʾ���ۿ�
    double finalAmount = 0.0;  // �����˵����
    double savings = 0.0;  // �Żݽ��
    

    // ����VIP״̬�͹����ܶ��������ۿ�
    if (isVIP == 1) {

        if (totalAmount >= 500) {
            discount = 0.8;
        }
        else if (totalAmount >= 350) {
            discount = 0.85;
        }
        else if (totalAmount >= 200) {
            discount = 0.9;
        }
        else {
            discount = 1.0;  // ��VIP�ҹ����ܶ�С��200ʱ���޶����ۿۣ�����ʵ����VIP�����Ѹ��ǣ���Ϊ�����Ա�����
            // ע�⣺ԭ�����д˴�������ΪVIP��else��֧��ӦӰ���VIP�ļ���
        }
    }
    else {
        if (totalAmount >= 500) {
            discount = 0.9;
        }
        else if (totalAmount >= 350) {
            discount = 0.95;
        }
        // ��VIP�ҹ����ܶ�С��350ʱ���޶����ۿۣ�Ĭ��Ϊ1.0�����ڳ�ʼ��ʱ���ã�
    }

    // ���������˵������Żݽ��
    finalAmount = totalAmount * discount;
    savings = totalAmount - finalAmount;
    double a = (double)totalAmount;
    // ����˵���Ϣ
    if (isVIP==1) {  // ������ۿۣ������yes������������Ӧ���no��������ĿҪ������ֻ�����ۿ�ʱ�������yes��
        printf("yes %.1f %.1f %.1f\n", a, finalAmount, savings);
    }
    else {
        printf("no %.1f %.1f %.1f\n", a, finalAmount, savings);
       
    }

    // ע�⣺Ϊ��˵������������δ�������ۿ�ʱ���������Ҫ��ʵ���У�������߼��ж�����ȷ�����no����ԭʼ�����ۿۣ�
    // ��������Ŀ���������������Ǽ��������ܻ�����ĳ���ۿ����������ֱ�����yes����ؽ��

    return 0;
}