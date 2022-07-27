#include<stdio.h>
#include<string.h>

	// 문자열 길이 : strlen
	// 문자열 복사 : strcpy > 최근 많이 사장됨, 매우 단순한 함수여서 보안 상 취약점이 됨 > linux : strncpy , windows : strncpy_s 사용  
	// 문자열 비교 : strcmp
	// 문자열 검색 : strchr, strstr 
	
int main(int argc, char *argv[])
{
	char *s1="Hello";
	char *s2="HeLlo";
	int len = strlen(s1);	// 문자열 s1의 길이 
	printf("Length of string : %d\n", len);
	
	char buf[100];
	strncpy(buf, s1, len);
	printf("Copied string : %s\n", buf);
	
	int cmp;
	cmp = strcmp(s1, s2);
	printf("Strcmp Value : %d\n", cmp);
	if(cmp==0)
		printf("Both of strings are same\n");
	else
		printf("They are different\n");
		
	char *s3 = "mylonglongstring";
	char *ret = NULL;
	
	while(1){
		if(ret==NULL)
			ret=strchr(s3, 'l');
		else
			ret=strchr(s3+(ret-s3)+1, 'l');
		
		if(ret==NULL){
			printf("Cannot find the character you want\n");
			break;
		}
		else
			printf("%s, %d\n", ret, ret-s3);
	}
	
	char *result=NULL;
	ret = strstr(s3, "gst");
	if(ret==NULL)
		printf("NOT FOUND\n");
	else
		printf("Index : %d\n", ret, ret-s3);
		
	char buf2[5]; //gstr
	char *word = "gstr";
	
	//ret = strstr(s3, word);
	strncpy(buf2, ret, 4/*strlen(word)*/);
	printf("%s\n", buf2);
		
	return 0;
}
