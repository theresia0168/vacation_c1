#include<stdio.h>

int main(int argc, char *argv[])
{
	int n, i;
	int mask = 0x80;\
	for(n=0; n<20; n++){
		printf("10진법 : %d\n16진법 : 0x%02X\n2진법  : ", n, n);
		for(i=0; i<8; i++){
			if(i%4==0&&i!=0){
				printf(" ");
			}
			if((n&(mask>>i))==0){
				printf("0");
			}
			else{
				printf("1");
			}
		}
		printf("\n\n");
	}
	
	/*
	n=0x13;				// 0001 0011
	int mask = 0x80;	// 
	int i=0;
	
	for(i=0; i<8; i++){
		if(i%4==0&&i!=0){
			printf(" ");
		}
		if((n&(mask>>i))==0){
			printf("0");
		}
		else{
			printf("1");
		}
	}
	*/
	
	return 0;
}
