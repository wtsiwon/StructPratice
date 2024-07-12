#include <stdio.h>
#include <string.h>


typedef char string[20];
typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned long ulong;
typedef unsigned char uchar;

typedef struct date {
	ushort year : 7;//1~127 128부터는 오버플로우나서 0부터 다시
	ushort month : 4;
	ushort day : 5;

	int arr[5];

}DATE;

typedef struct student {
	uint koreanScore;
	uint englishScore;
	uint mathScore;

	char name[20];
}STUDENT;

typedef union color
{
	uint color;
	uchar rgb[4];

}COLOR;

typedef union Name {
	uint birth;
	uchar arr[3];
}NAME;

enum type {
	korean,
	math,
	english,
	society,
	science,
};

int main() {

	



	//STUDENT student1 = { 90, 90, 90 };
	//STUDENT student2 = { 90, 90, 90 };

	//uchar* p = "아잉";

	//printf("%c", p[0]);



	//printf("%p ", student1.name);

	/*COLOR c1;

	c1.rgb[0] = 0xFF;
	c1.rgb[1] = 0xAB;
	c1.rgb[2] = 0x1F;
	c1.rgb[3] = 0x00;

	NAME name;

	name.arr[0] = "05";
	name.arr[1] = "03";
	name.arr[2] = "09";

	printf("%d", name.birth);

	printf("rgb color = %08X\n", c1.color);*/


	//enum subject sub = korean;

	//printf("%d\n", sub);

	//string s = { "" };

	//scanf("%s", &s);
	//printf("%s", s);

	//DATE Date = { 12, 11, 30, {1,2,3,4,5} };

	//COLOR color;

	//color.rgb[1] = 1;

	//uint a = 0;

	//string str = "김시원";

	//DATE *pDate = &Date;

	//Date.day = 32;//오버플로우
	//Date.month = 15;//오버플로우X
	//Date.year = 127;//오버플로우X

	//printf("%d", Date.year);


	return 0;
}