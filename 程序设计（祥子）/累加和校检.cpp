#include <stdio.h>
#include <string.h>
int main() {
    char message[100];
    int length, i;
    unsigned char sum = 0;
    fgets(message,100,stdin);
    // 去除换行符（因为fgets会把换行符也读进来）
    length = strlen(message);
    for (i = 0; i < length; i++) {
        sum += (unsigned char)message[i];
    }
    printf("%d", sum);
    return 0;
}
