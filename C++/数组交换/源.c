#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void swap(int* xp, int*yp)
//{
//    int temp = *xp;
//    *xp = *yp;
//    *yp = temp;
//}
//void swapArrayElements(int arr[], int n){
//    for (int i = 0; i < n; i++) {
//        swap(&arr[i],&arr[n + i]);
//} }
//int main(void)
//{
//    int n, i;
//    scanf("%d",&n);
//
//    int arr[2 * n];
//    for (i = 0; i < 2 * n; i++)
//    {
//        scanf("%d",&arr[i]);
//        
//    }
//    swapArrayElements(arr, n);
//    for (i = 0; i < 2 * n; i++)
//    {
//        printf("%d",arr[i]);
//    }
//    printf("\n");
//    return 0;
//}
//void swap(int* xp, int* yp) {
//    int temp = *xp;
//    *xp = *yp;
//    *yp = temp;
//}

//void swapArrayElements(int arr[], int n) {
//    for (int i = 0; i < n; i++) {
//        swap(&arr[i], &arr[n + i]);
//    }
//}
//
//int main() {
//    int n, i;
//    printf("请输入数组长度n: ");
//    scanf("%d", &n);
//
//    int arr[2 * n];
//    printf("请输入数组元素: ");
//    for (i = 0; i < 2 * n; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    swapArrayElements(arr, n);
//
//    printf("交换后的数组元素: ");
//    for (i = 0; i < 2 * n; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//
#include <stdlib.h>

void swap(int* xp, int* yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void swapArrayElements(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        swap(&arr[i], &arr[n + i]);
    }
}

int main() {
    int n, i;

    scanf("%d", &n);

    int* arr = (int*)malloc(2 * n * sizeof(int));
    if (arr == NULL) {
        printf("内存分配失败!\n");
        return 1;
    }


    for (i = 0; i < 2 * n; i++) {
        scanf("%d", &arr[i]);
    }

    swapArrayElements(arr, n);


    for (i = 0; i < 2 * n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);  // 释放动态分配的内存

    return 0;
}