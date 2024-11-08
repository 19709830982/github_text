#include <stdio.h>

void swap(int arr[], int n) {
    int i, temp;
    // 交换前n个元素和后n个元素
    for (i = 0; i < n; i++) {
        temp = arr[i];
        arr[i] = arr[i + n];
        arr[i + n] = temp;
    }
}

int main() {
    int n, i;
    scanf("%d", &n); // 读取n
    int arr[2 * n]; // 假设数组长度为2n
    for (i = 0; i < 2 * n; i++) {
        scanf("%d", &arr[i]); // 读取数组元素
    }
    swap(arr, n); // 调用交换函数
    for (i = 0; i < 2 * n; i++) {
        printf("%d ", arr[i]); // 输出交换后的数组
    }
    return 0;
}
