#include <stdio.h>
int main (){
	int rank,work;
	double reward=0;
	scanf("%d %d", &rank, &work);
	switch (rank){
		case 1:
			if (work>50000){
				reward+=(work-50000)*0.03;
			}
			printf("%d 50000.0 %.1f", rank, reward);
			break;
		case 2:
			if (work>35000){
				reward+=(work-35000)*0.02;
			}
			printf("%d 35000.0 %.1f", rank, reward);
			break;
		case 3:
			if (work>20000){
				reward+=(work-20000)*0.02;
			}
			printf("%d 20000.0 %.1f", rank, reward);
			break;
		case 4:
			if (work>5000){
				reward+=(work-5000)*0.025;
			}
			printf("%d 5000.0 %.1f", rank, reward);
			break;
	}
	return 0;
}
