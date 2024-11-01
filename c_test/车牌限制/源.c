#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d ",z%10);
    if (x > 400)
    {
        if (x % 10 == 1 || x % 10 == 3 || x % 10 == 5 || x % 10 == 7 || x % 10 == 9)
        {
            if (y == 1 || y == 3 || y == 5)
                printf("yes\n");
            else
                printf("no\n");
        }
        else
        {
            if (y == 2 || y == 4 || y == 6 || y == 7)
                printf("yes\n");
            else
                printf("no\n");
        }
    }
    else if (x < 200)
        printf("no\n");
    else
    {
        if (z % 10 == 1 || z % 10 == 6) { if (y == 1) printf("yes\n"); else printf("no\n"); }
        else if (z % 10 == 2 || z % 10 == 7) { if (y == 2) printf("yes\n"); else printf("no\n"); }
        else if (z % 10 == 3 || z % 10 == 8) { if (y == 3) printf("yes\n"); else printf("no\n"); }
        else if (z % 10 == 4 || z % 10 == 9) { if (y == 4) printf("yes\n"); else printf("no\n"); }
        else if (z % 10 == 5) { if (y == 5) printf("yes\n"); else printf("no\n"); }
        else if (z % 10 == 0) { if (y == 6) printf("yes\n"); else printf("no\n"); }
    }
    return 0;
}
