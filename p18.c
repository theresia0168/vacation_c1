#include<stdio.h>

int main(int argc, char *argv[])
{
	int n[3][2]={
					{10,20},
					{100,200},
					{1000,2000}
				};
	
	int i,j;
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			printf("[%d] [%d] : %d\n", i, j, n[i][j]);
		}
	}
	
	return 0;
}
