#include<stdio.h>

int main(int argc, char *argv[])
{
	int seven[50]; 			//7의 배수를 저장하는 배열 
	int i=0, sum=0;
	for(i=0; i<50; i++){
		seven[i]=(i+1)*7;	// 크기가 50인 배열 각각의 칸에 7부터 7의 배수를 입력 
		sum+=seven[i];		// 배열의 모든 값을 더한다
	}
	
	printf("Average is %.1f", sum/50.0);
	
	return 0;
}
