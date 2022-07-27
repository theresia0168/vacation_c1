#include<stdio.h>

int main(int argc, char *argv[])
{
	int n=7, m=3;
	
	printf("== : %d\n", n==m);
	printf("!= : %d\n", n!=m);
	printf("> : %d\n", n>m);
	printf("< : %d\n", n<m);
	
	//(n>m)&&(n==10) (AND)
	//(n>m)||(n==10) (OR)
	
	return 0;
}
