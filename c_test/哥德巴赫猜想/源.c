#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
    int a[100] = { 0 }, c = 1, n;
    scanf("%d", &n);
    a[0] = 2;
    for (int i = 3;; i = i + 2) {
        int j = 0;
        for (j = 2;; j++) {
            if (i % j == 0) {
                break;
            }
            if (j > sqrt(i)) {
                a[c] = i;
                c = c + 1;
                break;
            }
        }
        if (c == 100) {
            break;
        }
    }
    int q = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (a[i] + a[j] == n) {
                printf("%d %d", a[i], a[j]);
                q = 1;
                break;
            }
        }
        if (q == 1) {
            break;
        }
    }
    return 0;
}
