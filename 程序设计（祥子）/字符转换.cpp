#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	printf("%c ",a);
	if(a>='a'&&a<='w'){
		a+=3;
		printf("%c",a);
	}
	else if(a>='x'&&a<='z'){
		a-=23;
		printf("%c",a);
	}
	else if(a>='A'&&a<='B'){
		a+=24;
		printf("%c",a);
	}
	else if(a>='C'&&a<='Z'){
		a-=2;
		printf("%c",a);
		}
		else if(a>='0'&&a<='9'){
			a=105-a;
			printf("%c",a);
		}	
	else if(a==32){
		printf("*");
	}	
	else {
		printf("#");
	}	
	return 0;
}
