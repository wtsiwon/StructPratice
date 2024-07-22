#include <stdio.h>
#define SIZEX 3
#define SIZEY 2

typedef struct point {
	int x;
	int y;
}POINT;

void Swap(POINT(*arr)[SIZEX], POINT(*brr)[SIZEX], int Dimension);
void Print(POINT(*arr)[SIZEX], POINT(*brr)[SIZEX]);

int main() {
	POINT arr[SIZEY][SIZEX] = { {{1,1}, {2,2} , {3,3} }, { {4,4}, {5,5} , {6,6}} };
	POINT brr[SIZEY][SIZEX] = { {{10,10}, {20,20} , {30,30 } }, {{ 40,40 }, { 50,50 }, { 60,60 }} };

	Swap(arr, brr, 2);

	Print(arr, brr);

	return 0;
}

void Swap(POINT(*arr)[SIZEX], POINT(*brr)[SIZEX], int Dimension) {

	if (Dimension == 2) {
		int temp = 0;

		for (int i = 0; i < SIZEY; i++) {
			for (int j = 0; j < SIZEX; j++) {


				temp = arr[i][j].x;
				arr[i][j].x = brr[i][j].x;
				brr[i][j].x = temp;

				temp = arr[i][j].y;
				arr[i][j].y = brr[i][j].y;
				brr[i][j].y = temp;
			}
		}
	}

	/*else if (Dimension == 1)
	{
		for (int i = 0; i < SIZEX; i++) {
			int temp;

			temp = arr[i].x;
			arr[i].x = brr[i].x;
			brr[i].x = temp;

			temp = arr[i].y;
			arr[i].y = brr[i].y;
			brr[i].y = temp;
		}
	}*/
}

void Print(POINT(*arr)[SIZEX], POINT(*brr)[SIZEX]) {

	POINT(*aarr)[SIZEX] = { 0 };

	if (SIZEY == 1) {

	}
	for (int i = 0; i < SIZEY; i++) {
		for (int j = 0; j < SIZEX; j++) {
			printf("(%d %d)\n ", arr[i][j].x, arr[i][j].y);
		}
	}

	for (int i = 0; i < SIZEY; i++) {
		for (int j = 0; j < SIZEX; j++) {
			printf("(%d %d) \n ", brr[i][j].x, brr[i][j].y);
		}
	}

}


