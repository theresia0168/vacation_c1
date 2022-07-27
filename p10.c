#include<stdio.h>

int main(int argc, char *argv[])
{
	int i=0;
	
	do{
		printf("%d\n", i);
		i++;
	}while(i<5);
	
	// while¹® 
	/*while(i<5){ 
		printf("%d\n", i);
		i++;
	}*/
	 
	//for¹® 
	/*for(i=0; i<5; i++){
		printf("%d\n", i);
		printf("________________________________\n");
	}
	*/
	
	return 0;
}
