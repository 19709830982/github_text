#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int isVIP, total;
    double discount=0, billAmount, savings;

    // ����VIP��Ա״̬��1Ϊ��Ա��0Ϊ�ǻ�Ա���͹����ܶ�

    scanf("%d %d", &isVIP, &total);

    // ����VIP��Ա״̬�͹����ܶ�ȷ���ۿ�
   do{
        if (isVIP == 1) {
            if (total >= 500) {
                discount =0.8;
            }
            else if (total >= 350) {
                discount =0.85;
            }
            else if (total >= 200) {
                discount = 0.9;
            }
            else {
                discount = 0.95;
            }
        }
        else if (isVIP == 0) {
            if (total >= 500) {
                discount = 0.9;
            }
            else if (total >= 350) {
                discount = 0.95;
            }
            else {
                // ���ڷ�VIP�ҹ����ܶ�С��350��������������û�ж����ۿۣ�
                // ��������Ŀ���������������δ��ȷ˵������˰�ԭ�۴������ۿ�Ϊ10��
                discount = 1.0;
            }
        }
   } while (isVIP != 1 && isVIP != 0);
    // �����˵����ͽ�ʡ���
    billAmount = total * discount;
    savings = total - billAmount;

    // ����˵���Ϣ
    printf("%s %.1lf %.1lf %.1lf\n",
        isVIP ? "yes" : "no", total / 1.0, billAmount, savings);

    return 0;
}