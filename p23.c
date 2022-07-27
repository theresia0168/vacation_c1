#include<stdio.h>

int main(int argc, char *argv[])
{
	int n = 5;
	FILE *f = NULL;
	
	f = fopen("test.txt","w");	// w=write, r=read
	fprintf(f, "%d\n", n);		// the number stored in n has written on the test.txt 
	fclose(f);					// exit from the file
	
	int m=3, i=0;
	printf("m : %d\n", m);
	f = fopen("test.txt", "w");
	for(i=0; i<5; i++){
		fprintf(f, "%d\n", i*5);
	}
	fclose(f);
	
	f=fopen("test.txt", "r");
	while(!feof(f)){
		i=fgetc(f);
		printf("%c, %d\n", i, i);
	}
	fclose(f);
	
	/*
	f = fopen("test.txt", "r");
	while(!feof(f)){		//EOF = End Of File
		fscanf(f, "%d", &m);
		printf("changed m is %d\n", m);
	}
	fclose(f);		
	*/
	
	return 0;
}
