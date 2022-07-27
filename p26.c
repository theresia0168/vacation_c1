#include<stdio.h>

void double_value(int *list, int len);
void do_str(char *buf);

int main(int argc, char *argv[])
{
	int n[5]={1,2,3,4,5};
	int i=0;
	char *s1="mystring";
	char buf[15];
	
	strncpy(buf, s1, 15);
	
	double_value(&n,5);
	
	for(i=0; i<5; i++){
		printf("%d ", n[i]);
	}
	
	do_str(&buf);
	printf("%s\n", buf);
	
	return 0;
}

void double_value(int *list, int len){
	int i=0;
	for(i=0; i<len; i++){
		*(list+i)=*(list+i)*2;
	}
}

void do_str(char *buf){
	/*
	1. 첫번째 element 대문자화
	2. 문자열에서 "str"검색, 시작 주소값 받기
	3. 2번에서 얻은 문자열 오른쪽으로 한칸씩 옮기기 > 다른 char 변수에 뒷칸 문자를 임시저장해둔 후 앞칸 문자를 덮어 씌우는 방식을 반복 
	4. 새로 생긴 칸에 '_' 넣기 
	5. s>S 만들기 
	*/ 
	
	printf("%s\n", buf);
	
	char *ret=NULL;
	
	buf[0]-=32; // 1
	// *(buf+0)-=32;
	ret = strstr(buf, "str"); 
	printf("Index of str : %d\n", ret-buf);	//2
	
	char c, tmp;
	int i=0;
	int len=strlen(ret);
	
	c = *(ret+i);
	for(i=0; i<len; i++){	
		tmp = *(ret+i+1);
		*(ret+i+1) = c;
		c = tmp;
	}	//3

	strncpy(ret, "_", 1);	//4
	
	buf[3]-=32;	//5
}
