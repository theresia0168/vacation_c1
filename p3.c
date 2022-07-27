#include<stdio.h>

int main(int argc, char *argv[])
{
	int n=7;
	int m=3;
	
	printf("n+m = %d\n", n+m);
	printf("n-m = %d\n", n-m);
	printf("n*m = %d\n", n*m);
	printf("n/m = %d\n", n/m);
	printf("n%%m = %d\n", n%m);
	
	n=5;
	n++; //n=n+1;
	n--; //n=n-1;
	
	n+=5; //n=n+5;
	n-=5; //n=n-5;
	n*=5; //n=n*5;
	n/=5; //n=n/5;
	
	n=5;
	printf("%d\n", n++);
	printf("%d\n", n);
	
	n=5;
	printf("%d\n", ++n);
	printf("%d\n", n);
	
	return 0;
}
