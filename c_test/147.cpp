#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    // ѭ����ȡ����ֱ������0Ϊֹ
    while (scanf("%d", &num), num != 0) {
        if (num % 2 == 1) { // ������������ۼӵ�sum��
            sum += num;
        }
    }

    printf("%d\n", sum); // ������
    return 0;
}
