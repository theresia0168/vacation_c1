#include <stdio.h>

typedef struct point{
	int x, y;   // ¸â¹öº¯¼ö 
}POINT;

//typedef struct point POINT;
void point_set(struct point *p, int a, int b){
	//(*p).x = a;
	//(*p).y = b;
	p->x = a;
	p->y = b;
}

void point_print(struct point *p){
	printf("POINT(x, y): %d, %d\n", p->x, p->y);
}

int main(int argc, char *argv[]){
	int n[2]={10,20};   // point x, y
	
	POINT p1;
	point_set(&p1,100,200); 
	point_print(&p1);
	
	return 0;
}
