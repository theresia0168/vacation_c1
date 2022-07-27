#include<stdio.h>
#include<string.h>

	// ���ڿ� ���� : strlen
	// ���ڿ� ���� : strcpy > �ֱ� ���� �����, �ſ� �ܼ��� �Լ����� ���� �� ������� �� > linux : strncpy , windows : strncpy_s ���  
	// ���ڿ� �� : strcmp
	// ���ڿ� �˻� : strchr, strstr 
	
int main(int argc, char *argv[])
{
	char *s1="Hello";
	char *s2="HeLlo";
	int len = strlen(s1);	// ���ڿ� s1�� ���� 
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
