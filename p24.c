#include<stdio.h>
#define READ_SIZE 1024

int main(int argc, char *argv[])
{
	FILE *f=NULL;
	char buffer[142000];
	int i=0;

	f = fopen("google.html", "r");
	for(i=0; i<READ_SIZE; i++){
		buffer[i]=fgetc(f);
	}
	fclose(f);
	
	for(i=0; i<READ_SIZE; i++){
		printf("%c", buffer[i]);
	}
	
	printf("%s", buffer);
	
	char *ret = NULL;
	for(i=0; i<READ_SIZE;){
		ret = strstr(buffer+i, "function");
		if(ret==NULL){
			printf("NOT FOUND\n");
			break;
		}
		else{
			i = ret-buffer+1;
			printf("FOUND AT INDEX NUMBER %d\n", ret-buffer);
		}
	}
	
	return 0;
}
