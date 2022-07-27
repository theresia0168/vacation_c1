#include<stdio.h>

int main(int argc, char *argv[])
{
	int n[6]={10,20,30,40,50,0};
	int i=0, tmp1, tmp2;
	int len_n = sizeof(n)/4;
	
	for(i=0; i<6; i++){
		printf("%d ", n[i]);
	}printf("\n"); i=0;
	
	printf("After the sequence changed\n");
	
	tmp2=n[i];
	for(i=0; i<len_n; i++){
		tmp1=n[i+1];
		n[i+1]=tmp2;
		tmp2=tmp1;
		if(i==0)
			n[i]=n[len_n-1];
	}
	
	for(i=0; i<6; i++){
		printf("%d ", n[i]);
	}printf("\n");
	
	return 0;
}
