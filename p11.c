#include<stdio.h>

int main(int argc, char *argv[])
{
	int n,i;
	
	/*
	printf("Type your number : ");
	scanf("%d", &n);
	*/
	
	//int count=0;
	
	for(n=2; n<=100; n++){
		for(i=2; i<n; i++){
			if(n%i==0){
				//count++;
				//printf("%d is not prime number!\n", n);
				break;
			}
			else if(i==n-1&&n%i!=0){
				printf("%d is prime number.\n", n);
			}
		}
	}
	
	/*if(count==0){
		printf("%d is prime number.\n", n);
	}*/
	
	return 0;
}
