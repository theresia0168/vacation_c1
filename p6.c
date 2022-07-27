#include<stdio.h>

int main(int argc, char *argv[])
{
	int n=7, m=3;
	int x=5;
	
	if(n<5){
		printf("n greater than 0.\n");
	}
	else if(n<m){
		printf("n greater than m.\n");
	}
	else if(n%2==1){
		printf("n is odd number.\n");
	}
	else{
		printf("n not greater than 0.\n");
	}
	
	if(x==5){
		printf("hello\n");
		printf("world\n");
	}
	else{
		printf("bye bye\nworld\n");
	}
	
	return 0;	
}
