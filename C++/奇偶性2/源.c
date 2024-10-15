#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;
  
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Å¼Êý\n");
    }
    else {
        printf("ÆæÊý\n");
    }

    return 0;
}