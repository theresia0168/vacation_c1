#include<stdio.h>

int main(int argc, char *argv[])
{
	int n;
	printf("Type your number : ");
	scanf("%d", &n);
	
	switch(n%7){
		case 0:
			printf("7의 배수입니다.\n");
			break;
		default:
			printf("7의 배수가 아닙니다.\n");
			break;
	}
	
	return 0;
}
