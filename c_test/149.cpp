#include <stdio.h>

int main() {
    int N, i;
    double sum = 0.0;
    
    // 输入正整数N
    scanf("%d", &N);
    
    // 计算前N项和
    for (i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            // 如果i是偶数，减去对应的分数
            sum -= (double)i / (2 * i - 1);
        } else {
            // 如果i是奇数，加上对应的分数
            sum += (double)i / (2 * i - 1);
        }
    }
    
    // 输出结果，保留三位小数
    printf("%.3f\n", sum);
    
    return 0;
}

