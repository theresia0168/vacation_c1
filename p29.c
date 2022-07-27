#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int n_numbers,i,sum;
	int *num = NULL;
	
	printf("How many numbers do you need?\nI need : ");
	scanf("%d", &n_numbers);
	
	num = (int*)malloc(sizeof(int)*n_numbers);
	for(i=0; i<n_numbers; i++){
		printf("Index %d : ", i);
		scanf("%d", &*(num+i));
	}printf("\n");
	for(i=0; i<n_numbers; i++){
		sum+=num[i];
	}
	printf("AVG : %d\n", sum/n_numbers);
	
	free(num);
	return 0;
}
