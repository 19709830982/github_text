#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int isVIP, total;
    double discount=0, billAmount, savings;

    // 输入VIP会员状态（1为会员，0为非会员）和购物总额

    scanf("%d %d", &isVIP, &total);

    // 根据VIP会员状态和购物总额确定折扣
   do{
        if (isVIP == 1) {
            if (total >= 500) {
                discount =0.8;
            }
            else if (total >= 350) {
                discount =0.85;
            }
            else if (total >= 200) {
                discount = 0.9;
            }
            else {
                discount = 0.95;
            }
        }
        else if (isVIP == 0) {
            if (total >= 500) {
                discount = 0.9;
            }
            else if (total >= 350) {
                discount = 0.95;
            }
            else {
                // 对于非VIP且购物总额小于350的情况，这里假设没有额外折扣，
                // 但根据题目描述，这种情况并未明确说明，因此按原价处理（即折扣为10）
                discount = 1.0;
            }
        }
   } while (isVIP != 1 && isVIP != 0);
    // 计算账单金额和节省金额
    billAmount = total * discount;
    savings = total - billAmount;

    // 输出账单信息
    printf("%s %.1lf %.1lf %.1lf\n",
        isVIP ? "yes" : "no", total / 1.0, billAmount, savings);

    return 0;
}