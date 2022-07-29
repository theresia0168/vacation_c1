#include <stdio.h>
#include <stdlib.h>

int* mul_array(int *a, int *b, int n){
	int *ret = NULL;
	int i;
	
	ret = (int*)malloc(sizeof(int)*n);
	for(i=0; i<n; i++){
		*(ret+i) = a[i] * b[i];
	}
	return ret;
}

int main(int argc, char *argv[]){
	int n[5] = {1,2,3,4,5};
	int m[5] = {9,8,7,6,5};
	int *x, i;
	
	x = mul_array(n, m, 5);
	for(i=0; i<5; i++)
		printf("%d, ", x[i]);
	free(x);
	
	return 0;
}
