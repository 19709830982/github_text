#include <stdio.h>
#include <math.h>

int main() {
    double x, result;
    
    // ����һ��ʵ��x��ֵ
    scanf("%lf", &x);
    
    // ����x��ֵ����f(x)
    if (x >= 0) {
        result = sqrt(x); // ʹ��sqrt������ƽ����
    } else {
        result = pow((x + 1), 2) + 2 * x + 1 / x; // ע�⣺������Ҫ������Ը������������
    }
    
    // ��������������λС��
    printf("%.2f\n", result);
    
    return 0;
}

