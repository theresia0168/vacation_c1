#include<stdio.h>

int main(int argc, char *argv[])
{
	char c;
	c=97;
	printf("%d, %c\n", c, c);
	
	c='h';
	printf("%c\n", c);
	
	char c1[6]={'h','e','l','l','o','\0'};
	char c2[]={'h','e','l','l','o','\0'};
	char c3[]="hello";
	char *c4 = "HelloWorld";		// ���ڿ��� ǥ���� �� ���� ���� ����ϴ� ���. ���ڿ��� ���� ù��° ���� �ּҸ� ������ ���� 
	char buf[20];
	int i=0;
	for(i=0; i<5; i++){
		printf("%c", c1[i]);
	}
	printf("\n");
	
	c1[2]='L';
	strcpy(buf,c4);
	printf("buf : %s\n", buf);
	buf[5]='w';
	//*(buf+5)='w';
	printf("buf : %s\n", buf);
	
	
	printf("c1 : %s\n", c1);		// %c > ���� �ϳ� ��� , %s > ���ڿ� ��ü ���
	printf("c2 : %s\n", c2);
	printf("c3 : %s\n", c3);
	printf("c4 : %s\n", c4);
	
	return 0;
}
