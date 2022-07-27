#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int n1[10];
	int n2[10];
	int i, m;
	
	srand(1111);
	/*printf("n1 : ");
	for(i=0; i<10; i++){
		n1[i]=rand()%100;
		printf("%d ", n1[i]);
	}
	printf("\n");
	printf("n2 : ");
	for(i=0; i<10; i++){
		n2[i]=rand()%100;
		printf("%d ", n2[i]);
	}
	printf("\n\n");*/
	
	int sum=0;
	for(i=0; i<10; i++){
		n1[i]=rand()%100;
		n2[i]=rand()%100;
		sum+=n1[i]*n2[i];
	}
	printf("The sum of the multiples : %d\n", sum);
	
	return 0;
}
