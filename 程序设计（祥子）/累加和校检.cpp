#include <stdio.h>
#include <string.h>
int main() {
    char message[100];
    int length, i;
    unsigned char sum = 0;
    fgets(message,100,stdin);
    // ȥ�����з�����Ϊfgets��ѻ��з�Ҳ��������
    length = strlen(message);
    for (i = 0; i < length; i++) {
        sum += (unsigned char)message[i];
    }
    printf("%d", sum);
    return 0;
}
