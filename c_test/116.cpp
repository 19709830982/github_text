#include <stdio.h>

int main() {
    double electricity, cost;
    
    // 输入用电量
    scanf("%lf", &electricity);
    
    if (electricity <= 110) {
        // 如果用电量在0到110度之间（包括110度）
        cost = electricity * 0.5;
    } else if (electricity > 210) {
        // 如果用电量超过210度
        cost = 110 * 0.5 + 100 * 0.55 + (electricity - 210) * 0.7;
    } else {
        // 如果用电量在110到210度之间（包括210度）
        cost = 110 * 0.5 + (electricity - 110) * 0.55;
    }
    
    // 输出电费，保留两位小数
    printf("%.2f\n", cost);
    
    return 0;
}

