#include<stdio.h>

int main(int argc, char *argv[])
{
	char c,d; // binary = 0100 0001
	
	// 1byte = 8bit
	c=1;
	 
	printf("%d\n", c);
	printf("%d\n", c<<1);
	printf("%d\n", c<<2);
	printf("\n");
	
	c=4;
	printf("%d\n", c>>1);
	printf("%d\n", c>>2);
	printf("\n");
	
	c=1, d=2;
	printf("%d\n", c&d); //masking시에 많이 사용 > binary 표현을 위해 
	printf("%d\n", c|d);
	
	return 0;
}
