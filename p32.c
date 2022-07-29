#include <stdio.h>

int main(int argc, char *argv[]){
	int n[3][2]={
					{10,20},
					{100,200},
					{150,250}
				};
	int i,j;
	
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			printf("n[%d][%d]: %d, 0x%X\n",
						i,j,n[i][j], &(n[i][j]));
		}
	}
	printf("n: 0x%X\n", n);
	printf("n[0]: 0x%X\n", n[0]);
	printf("n[2]: 0x%X, 0x%X\n", n[2], n+2);
	
	return 0;
}
