// ���� �޸� �Ҵ� 

#include<stdio.h>
#include<stdlib.h> 

int main(int argc, char *argv[])
{
	int n[5]={10,20,30,40,50};
	char buf[30];
	
	int *m=NULL;
	int size;
	
	scanf("%d", &size);
	
	// malloc = memory allocation
	// m = malloc(20);
	m = (int*)malloc(sizeof(int)*size);
	
	int i=0;
	for(i=0; i<size; i++){
		m[i]=100+i;
	}
	for(i=0; i<size; i++){
		printf("%d ", m[i]);
	}printf("\n");
	free(m); // ��ȯ������ ������ ����ؼ� �ش� �޸𸮴� ��� �����̱� ������ ȿ������ �޸� ����� �Ұ����ϴ�
	
	char *mc=NULL;
	mc = (char*)malloc(sizeof(char)*30);
	for(i=0; i<30; i++){
		mc[i]=i+60;
	} 
	for(i=0; i<30; i++){
		printf("%c ", mc[i]);
	}printf("\n");
	free(mc);
	
	return 0;
}
