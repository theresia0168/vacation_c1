#include<stdio.h>

int main(int argc, char *argv[])
{
	int n, i;
	
	for(i=0; i<3; i++){
		printf("Type your number : ");
		scanf("%d", &n);
	
		if(n%2==0){
			printf("%d is even : %d\n", n, n*n);
		}
		else{
			printf("%d is odd : %d\n", n, n-1);
		}
	}
	
	return 0;
}
