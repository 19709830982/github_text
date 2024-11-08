#include<stdio.h>
int main()
{
	char s,b,c,d,e;
	int h=0;
	scanf("%c %c %c %c %c",&s,&b,&c,&d,&e);
	if(s=='a'||s=='A'){
		h++;
	}
	if(b=='a'||b=='A'){
		h++;
	}
	if(c=='a'||c=='A'){
		h++;
	}
	if(d=='a'||d=='A'){
		h++;
	}
	if(e=='a'||e=='A'){
		h++;
	}
	printf("%d",h);
	return 0;
}
