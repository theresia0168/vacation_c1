#include<stdio.h>
#include<stdlib.h>

char *get_char_heap(int n);
char *concat_str(char *s1, char *s2);

int main(int argc, char *argv[])
{
	char *m;
	m=get_char_heap(100);
	free(m);
	
	m = concat_str("abc", "defghik");
	printf("%s\n", m);
	
	return 0;
}

char *get_char_heap(int n)
{
	char *r = NULL;
	int i;
	r = (char*)malloc(sizeof(char)*(n+1));
	if(r==NULL){
		return r;
	}
	for(i=0; i<n; i++){
		r[i]=0;
	}
	return r; 	
}

char *concat_str(char *s1, char *s2)
{
	char *r = NULL;
	int len, len1, len2, i;
	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1+len2;
	printf("%d %d\n", len1, len2);
	
	r = (char*)malloc(sizeof(char)*(len+1));
	
	for(i=0; i<len; i++){
		r[i]=0;
	}
	
	strncpy(r, s1, len1);
	strncpy(r+len1, s2, len2);
	
	return r;
}

