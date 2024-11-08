#include <stdio.h>
int main() {
    int n, i = 0;
    scanf("%d", &n);
    int a[n];
    double sum = 0.0f;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
 
    }
    printf("%.2lf\n", sum / n);
    return 0;
}
