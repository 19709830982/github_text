#include <stdio.h>

int main() {
    double electricity, cost;
    
    // �����õ���
    scanf("%lf", &electricity);
    
    if (electricity <= 110) {
        // ����õ�����0��110��֮�䣨����110�ȣ�
        cost = electricity * 0.5;
    } else if (electricity > 210) {
        // ����õ�������210��
        cost = 110 * 0.5 + 100 * 0.55 + (electricity - 210) * 0.7;
    } else {
        // ����õ�����110��210��֮�䣨����210�ȣ�
        cost = 110 * 0.5 + (electricity - 110) * 0.55;
    }
    
    // �����ѣ�������λС��
    printf("%.2f\n", cost);
    
    return 0;
}

