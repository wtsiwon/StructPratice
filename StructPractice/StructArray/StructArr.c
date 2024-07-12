#include <stdio.h>

typedef struct point {
	int x, y;
}POINT;

void print_point(POINT* pt);

int main(void) {

}


void print_point(POINT* pt) {
	for (int i = 0; i < 5; i++) {
		printf("(%d, %d)", (*(pt + i)).x, (*(pt + i)).y);
		printf(" ");
	}
}