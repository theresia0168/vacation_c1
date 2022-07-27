#include<stdio.h>

void fn1();
void fn2(int n);
void fn3(int *n);

int main(int argc, char *argv[])
{
	int n=5;
	
	fn1();
	fn2(n);
	
	printf("main after fn2 is %d\n", n);
	
	fn3(&n);
	
	printf("main after fn3 is %d\n", n);
	
	return 0;
}

void fn1(){
	printf("This is function no.1\n");
	printf("This function doesn't has any tools\n");
}

void fn2(int n){
	printf("fn2-%d\n", n);
	n=20;
}

void fn3(int *n){
	printf("fn3 %d\n", *n);
	*n=200;
}
