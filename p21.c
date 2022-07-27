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
	char *c4 = "HelloWorld";		// 문자열을 표현할 때 가장 많이 사용하는 방법. 문자열의 가장 첫번째 문자 주소를 가지는 변수 
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
	
	
	printf("c1 : %s\n", c1);		// %c > 문자 하나 출력 , %s > 문자열 전체 출력
	printf("c2 : %s\n", c2);
	printf("c3 : %s\n", c3);
	printf("c4 : %s\n", c4);
	
	return 0;
}
