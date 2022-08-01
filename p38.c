#include<stdio.h>

// struct alignment, Á¤·Ä
 
struct struct_one{
	int x,y;
	char a,b;
};

struct struct_two{
	char a;
	int x,y;
	char b;
};

// union
typedef union union_one{
	int x,y;
}UNION_ONE;

struct color_rgb{
	char alpha,b,g,r;
};

typedef union color{
	int code;
	struct color_rgb comp;
}COLOR;

int main(int argc, char *argv[])
{
	printf("Size of Struct_One : %d\n", sizeof(struct struct_one));
	printf("Size of Struct_Two : %d\n", sizeof(struct struct_two));
	
	union union_one myunion;
	UNION_ONE myunion2;
	
	myunion.x=100;
	printf("x : %d\n", myunion.x);
	printf("y : %d\n", myunion.y);
	myunion.y=200;
	printf("y : %d\n", myunion.y);
	printf("x : %d\n", myunion.x);
	
	union color mycolor;
	mycolor.code=0;
	mycolor.comp.r=255;
	mycolor.comp.g=128;
	mycolor.comp.b=0;
	
	printf("0x%x\n", mycolor.code);
	
	return 0;
}
