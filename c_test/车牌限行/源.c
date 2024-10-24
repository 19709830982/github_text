#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int day, pm, plate;
    scanf("%d %d %d", &day, &pm, &plate);

    // 获取车牌的最后一位数字
    int last_digit = plate % 10;

    // 判断是否限行
    if (day == 6 || day == 7) {
        printf("%d no\n", last_digit);
    }
    else if (pm < 200) {
        printf("%d no\n", last_digit);
    }
    else if (pm >= 200 && pm < 400) {
        if ((day == 1 && (last_digit == 1 || last_digit == 6)) ||
            (day == 2 && (last_digit == 2 || last_digit == 7)) ||
            (day == 3 && (last_digit == 3 || last_digit == 8)) ||
            (day == 4 && (last_digit == 4 || last_digit == 9)) ||
            (day == 5 && (last_digit == 5 || last_digit == 0))) {
            printf("%d yes\n", last_digit);
        }
        else {
            printf("%d no\n", last_digit);
        }
    }
    else {
        if ((day == 1 || day == 3 || day == 5) && (last_digit % 2 == 1)) {
            printf("%d yes\n", last_digit);
        }
        else if ((day == 2 || day == 4) && (last_digit % 2 == 0)) {
            printf("%d yes\n", last_digit);
        }
        else {
            printf("%d no\n", last_digit);
        }
    }

    return 0;
}