#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// ��������
#define DEPOSIT_AMOUNT 1000.0

// ���������ʣ���λ��%��
#define YEARLY_RATE_3 2.75
#define YEARLY_RATE_2 2.1
#define YEARLY_RATE_1 1.5
#define YEARLY_RATE_LIVE 0.35

// ������ڣ���λ���꣩
#define TERM_3 3
#define TERM_2 2
#define TERM_1 1

// ��������ĺ���
double calculateDepositAmount(double initialDeposit, int term, double yearlyRate) {
    double finalAmount = initialDeposit;
    for (int i = 0; i < term; i++) {
        finalAmount += finalAmount * (yearlyRate / 100.0);
    }
    return finalAmount;
}

// ������ڴ����ĺ��������Ǽ��Ƚ��㣩
double calculateLiveDepositAmount(double initialDeposit, int mainTerm, int liveTerm, double yearlyRate) {
    double finalAmount = initialDeposit;
    for (int i = 0; i < mainTerm; i++) {
        finalAmount += finalAmount * (yearlyRate / 100.0);
    }
    // ���ڰ����Ƚ��㣬ת��Ϊ����
    double liveInterestRatePerQuarter = yearlyRate / 4.0;
    for (int i = 0; i < liveTerm * 4; i++) {
        finalAmount += finalAmount * liveInterestRatePerQuarter / 4.0;
    }
    // ע�⣺����Ϊ�˼򻯣�û���ϸ񰴼��ȸ������㣬����ֱ�Ӱ������ʵ��ķ�֮һ������ÿ�����ȵ���Ϣ��
    // �����Ҫ����ȷ�ļ��㣬Ӧ��ʹ��ѭ��������ӵĹ�ʽ��ģ��ÿ�����ȵĸ�����
    // ��������ĿҪ��򻯴��������������������
    // ���⣬���ڻ��ڴ�����޽϶̣�����Ϊ2�꣩�������򻯷���������ڿɽ��ܷ�Χ�ڡ�
    return finalAmount;
}

int main() {
    // �������ִ洢�����µ����ս��
    double finalAmount1 = calculateDepositAmount(DEPOSIT_AMOUNT, TERM_3, YEARLY_RATE_3) * (1 + YEARLY_RATE_2 / 100.0) * (1 + YEARLY_RATE_2 / 100.0); // ע�⣺������˼��㣬û���ϸ�ֿ��������ڴ��ļ�����̡�
    double finalAmount2 = calculateDepositAmount(DEPOSIT_AMOUNT, TERM_2, YEARLY_RATE_2) * (1 + YEARLY_RATE_3 / 100.0) * (1 + YEARLY_RATE_3 / 100.0) * (1 + YEARLY_RATE_3 / 100.0); // ͬ��
    double finalAmount3 = calculateDepositAmount(DEPOSIT_AMOUNT, TERM_1, YEARLY_RATE_1) * (1 + YEARLY_RATE_2 / 100.0) * (1 + YEARLY_RATE_2 / 100.0) * (1 + YEARLY_RATE_1 / 100.0) * (1 + YEARLY_RATE_1 / 100.0); // ͬ�ϣ���ע��������1���ڴ��
    double finalAmount4 = calculateLiveDepositAmount(DEPOSIT_AMOUNT, TERM_3, TERM_2, YEARLY_RATE_LIVE); // ʹ�û��ڼ��㺯������ע������ļ򻯴���

    // ��������ע���ʽ�����Ϊ��λС��
    printf("�ȴ�3�궨���ٴ�2�궨�ڣ����ս��: %.2f\n", finalAmount1);
    printf("�ȴ�2�궨���ٴ�3�궨�ڣ����ս��: %.2f\n", finalAmount2);
    printf("�ִ�1�궨�ڣ��ٴ�2���궨�ڣ��ٷ�2���1�궨�ڣ����ս��: %.2f\n", finalAmount3);
    printf("�ȴ�3�궨���ٴ�2����ڣ����ս��: %.2f\n", finalAmount4);

    return 0;
}