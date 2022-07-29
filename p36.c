#include <stdio.h>
#include <stdlib.h>

typedef struct point{
	int x, y;   // ¸â¹öº¯¼ö 
}POINT;

//typedef struct point POINT;

POINT *point_new(int n){
	POINT *r;
	r = (POINT*)malloc(sizeof(POINT)*n);
	return r;
}

void point_set(struct point *p, int a, int b){
	//(*p).x = a;
	//(*p).y = b;
	if(p==NULL)
		return;
	p->x = a;
	p->y = b;
}

void point_print(struct point *p){
	if(p==NULL) return;
	printf("POINT(x, y): %d, %d\n", p->x, p->y);
}

int main(int argc, char *argv[]){

	POINT p1;
	POINT *p2;
	
	point_set(&p1, 150,250);
	point_print(&p1);
	
	//p2 = (POINT*)malloc(sizeof(POINT)*1);
	p2 = point_new(1);
	point_set(p2, 15, 25);
	point_print(p2);
	free(p2);
	
	return 0;
}
