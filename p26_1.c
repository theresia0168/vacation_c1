#include<stdio.h>

void do_str(char *buf);

int main(int argc, char *argv[])
{
	char *s1="mystring";
	char buf[15];
	
	strncpy(buf, s1, 15);
	printf("%s\n", buf);
	
	do_str(&buf);
	
	return 0;
}

void do_str(char *buf)
{
	printf("Original buf : %s\n", buf);
	
	char *ret=NULL;
	
	buf[0]-=32; // 1
	// *(buf+0)-=32;
	ret = strstr(buf, "str"); 
	printf("Index of str : %d\n", ret-buf);	//2
	
	char c, tmp;
	int i=0;
	int len=strlen(ret);
	
	c = *(ret+i);
	while(c!='\0'){	// for(i=0; *(ret+i)!='\0'; i++)
		tmp = *(ret+i+1);
		*(ret+i+1) = c;
		c = tmp;
		if(i==0)
			strncpy(ret, "_", 1); //4
		i++;
	}	//3
	
	buf[3]-=32;	//5
	
	printf("Result of the function do_str : %s\n", buf);
}
