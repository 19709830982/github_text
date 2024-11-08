#include <stdio.h>
#include <math.h>
int main() {
    double x;
    scanf("%lf", &x);
    if (x >= 0) {
        x = sqrt(x);
    } else {
        x = (x + 1) * (x + 1) + 2 * x + 1 / x;
    }
    printf("%.2f\n", x);
    return 0;
}
