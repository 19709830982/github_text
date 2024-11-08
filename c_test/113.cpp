#include <stdio.h>
#include <math.h>

int main() {
    double x, result;
    
    // 输入一个实数x的值
    scanf("%lf", &x);
    
    // 根据x的值计算f(x)
    if (x >= 0) {
        result = sqrt(x); // 使用sqrt函数求平方根
    } else {
        result = pow((x + 1), 2) + 2 * x + 1 / x; // 注意：这里需要处理除以负数的特殊情况
    }
    
    // 输出结果，保留两位小数
    printf("%.2f\n", result);
    
    return 0;
}

