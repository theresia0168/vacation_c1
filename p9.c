#include<stdio.h>

int main(int argc, char *argv[])
{
	int n;
	printf("Type your number : ");
	scanf("%d", &n);
	
	switch(n%7){
		case 0:
			printf("7�� ����Դϴ�.\n");
			break;
		default:
			printf("7�� ����� �ƴմϴ�.\n");
			break;
	}
	
	return 0;
}
