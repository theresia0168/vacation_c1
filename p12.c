#include<stdio.h>

int main(int argc, char *argv[])
{
	int n[10];
	int m[5]={1,2,3,4,5};
	int x[]={10,20,30,40,50}; //�ʱⰪ�� �ִ� ��쿡�� �迭�� ũ�⸦ ���������� �ʾƵ� �� 
	int i;
	
	printf("Array n : ");
	for(i=0; i<10; i++){
		n[i]=i+1;
		printf("%d ", n[i]);
	}
	printf("\n");
	
	printf("Array m : ");
	for(i=0; i<5; i++){
		printf("%d ", m[i]*2);
	}
	printf("\n");
	
	printf("Changed array m : ");
	for(i=0; i<5; i++){
		m[i]=15*i;
		printf("%d ", m[i]);
	}
	
	return 0;
}
