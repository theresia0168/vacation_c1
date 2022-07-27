#include<stdio.h>
#define m 20

int main(int argc, char *argv[])
{
	/*
	int      정수, 음/양 구분 가능 
	long     정수(큰 수) 
	float    실수, 음/양 구분 가능 
	double   실수(큰 수) 
	char     문자(알파벳 하나 저장 가능) 
	*/
	
	int n=0;
	const int x=123;
	n=5;
	printf("value of n : %d\n", n);
	n=10;
	printf("value of n : %d\n", n);
	printf("value of m : %d\n", m);
	printf("value of x : %d\n", x);
	
	printf("int : %d\n", sizeof(int));
	printf("long : %d\n", sizeof(long));
	printf("float : %d\n", sizeof(float));
	printf("double : %d\n", sizeof(double));
	printf("char : %d\n", sizeof(char));
	
	return 0;
}
