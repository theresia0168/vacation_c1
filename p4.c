#include<stdio.h>



int main(int argc, char *argv[])
{
	int x=15;
	int y=100;
	float z=10.5;
	x*=x;
	x+=7;
	
	printf("x의 최종 값 : %d, %d, %.1f\n", x, y, z);
	
	return 0;
}
