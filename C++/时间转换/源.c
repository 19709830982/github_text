#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void convertTime(int seconds) {
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int secs = seconds % 60;
    char period[3] = "am";

    if (hours >= 12) {
        period[0] = 'p';
        period[1] = 'm';
    }
  
    printf("%02d:%02d:%02d %s\n", hours, minutes, secs, period);
}

int main() {
    int seconds;

    scanf("%d", &seconds);

    convertTime(seconds);

    return 0;
}