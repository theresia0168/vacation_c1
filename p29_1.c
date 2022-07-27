#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int n_len, i;
	char *name = NULL;
	
	printf("Type your name's length : ");	// Length of the name 
	scanf("%d", &n_len);
	name = (char*)malloc(sizeof(char)*(n_len+));
	
	printf("Type your name : ");		// Name input
	scanf("%s", name); 
	
	printf("Your name is %s\n", name);	// Name output
	free(name);
	
	return 0;
}
