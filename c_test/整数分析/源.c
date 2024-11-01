#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, s[10], i = 1, max, min;
	scanf("%d", &a);
	for (;; i++) {
		s[i - 1] = a % 10;
		a = a / 10;
		if (a == 0) {
			break;
		}

	}
	max = s[0];
	min = s[0];
	for (int j = 1; j < i; j++) {
		if (max < s[j]) {
			max = s[j];
		}
		if (min > s[j]) {
			min = s[j];
		}
	}
	printf("%d %d %d", i, max, min);
	return 0;
}