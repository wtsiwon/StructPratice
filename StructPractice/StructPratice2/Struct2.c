#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef char string[20];

typedef enum Rating {
	A = 4,
	B = 3,
	C = 2,
	D = 1,
	F = 0,
}RATING;

typedef struct student {
	int studentNumber;
	char Name[20];
	int korean;
	int math;
	int english;
	double sum;
	double avg;
	RATING rating;

}STUDENT;

void Input(STUDENT* arr);
void Output(STUDENT* arr);
void GradeCalculation(STUDENT* arr);
void Sort(STUDENT* arr);

int main() {

	STUDENT student[3] = {0};

	Input(student);
	GradeCalculation(student);
	Sort(student);
	Output(student);

	return 0;
}

void Input(STUDENT* arr) {

	for (int i = 0; i < 3; i++) {
		printf("학번: ");
		scanf("%d", &arr[i].studentNumber);
		printf("이름: " );
		scanf("%s", &arr[i].Name);
		printf("국어 점수: ");
		scanf("%d", &arr[i].korean);
		printf("수학점수: ");
		scanf("%d", &arr[i].math);
		printf("영어점수: ");
		scanf("%d", &arr[i].english);
		printf("\n");
	}
}

void Output(STUDENT* arr) {
	char ratings[5] = { 'F', 'D', 'C', 'B', 'A' };

	for (int i = 0; i < 3; i++) {
		printf("학번: %d \n이름: %s \n국어점수: %d \n수학점수: %d \n영어점수: %d\n 총점: %.1lf \n평균: %.1lf \n등급: %c\n\n"
			, arr[i].studentNumber, arr[i].Name, arr[i].korean, arr[i].math, arr[i].english, arr[i].sum, arr[i].avg, ratings[arr[i].rating]);
	}
}

void GradeCalculation(STUDENT* arr) {
	for (int i = 0; i < 3; i++) {
		arr[i].sum = (double)(arr[i].korean + arr[i].math + arr[i].english);
		arr[i].avg = arr[i].sum / 3;
	}

	for (int i = 0; i < 3; i++) {

		if (arr[i].avg > 90) {
			arr[i].rating = A;
		}
		else if (arr[i].avg > 80) {
			arr[i].rating = B;
		}
		else if (arr[i].avg > 70) {
			arr[i].rating = C;
		}
		else if (arr[i].avg > 60) {
			arr[i].rating = D;
		}
		else {
			arr[i].rating = F;
		}
	}
}

void Sort(STUDENT* arr) {

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (arr[j].rating < arr[j + 1].rating) {
				STUDENT temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
}
