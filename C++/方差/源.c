#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int n;

    scanf("%d", &n);

    int num[n];
    double sum = 0;
    //  ‰»Î ˝¡–
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
        sum += num[i];
    }
    double mean = sum / n;

    double diff_sq_sum = 0;
    for (int i = 0; i < n; i++) {
        double diff = num[i] - mean;
        diff_sq_sum += diff * diff;
    }

    double variance = diff_sq_sum / n;
    printf("%d\n", (int)variance);
    return 0;
}

