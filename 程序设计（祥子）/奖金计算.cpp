#include <stdio.h>
#include <cmath>
int main(){
    int t;
    double I,reward;
    scanf("%lf",&I);
    t=(I-1)/1e5;
    switch(t){
    case 0:
        reward=I*0.1;
        break;
    case 1:
        reward=(I-1e5)*0.075+1e5*0.1;
        break;
    case 2:
    case 3:
        reward=(I-2e5)*0.05+1e5*0.1+1e5*0.075;
        break;
    case 4:
    case 5: 
	case 6:
    case 7:
        reward=(I-4e5)*0.03+1e5*0.1+1e5*0.075+2e5*0.05;
        break;
    default:
        reward=(I-8e5)*0.01+1e5*0.1+1e5*0.075+2e5*0.05+4e5*0.03;
    }
    printf("%.1f\n",reward);
    return 0;
}
