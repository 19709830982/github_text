#include <stdio.h>

int main() {
    int N, i;
    double sum = 0.0;
    
    // ����������N
    scanf("%d", &N);
    
    // ����ǰN���
    for (i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            // ���i��ż������ȥ��Ӧ�ķ���
            sum -= (double)i / (2 * i - 1);
        } else {
            // ���i�����������϶�Ӧ�ķ���
            sum += (double)i / (2 * i - 1);
        }
    }
    
    // ��������������λС��
    printf("%.3f\n", sum);
    
    return 0;
}

