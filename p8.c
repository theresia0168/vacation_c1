#include<stdio.h>

int main(int argc, char argv[])
{
	int n=3;
	
	switch(n){
		case 0:
			printf("Zero.\n");
			break;
		case 5:
			printf("Five.\n");
			break;
		default:
			printf("Don't know.\n");
			break;
	}
	
	return 0;
}

