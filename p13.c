#include<stdio.h>

int main(int argc, char *argv[])
{
	int seven[50]; 			//7�� ����� �����ϴ� �迭 
	int i=0, sum=0;
	for(i=0; i<50; i++){
		seven[i]=(i+1)*7;	// ũ�Ⱑ 50�� �迭 ������ ĭ�� 7���� 7�� ����� �Է� 
		sum+=seven[i];		// �迭�� ��� ���� ���Ѵ�
	}
	
	printf("Average is %.1f", sum/50.0);
	
	return 0;
}
