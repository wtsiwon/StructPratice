#include <stdio.h>

typedef char name[20];

typedef enum Rating {
	A = 4,
	B = 3,
	C = 2,
	D = 1,
	F = 0,
}RATING;

typedef struct student {
	int studentNumber;
	name Name;
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

	return 0;
}

void Input(STUDENT* arr) {

	for (int i = 0; i < 3; i++) {
		scanf_s("학번: %d", arr[i].studentNumber);
		scanf_s("이름: %s", arr[i].Name);
		scanf_s("국어점수: %d", arr[i].korean);
		scanf_s("수학점수: %d", arr[i].math);
		scanf_s("영어점수: %d", arr[i].english);
	}
}

void Output(STUDENT* arr) {
	for (int i = 0; i < 3; i++) {
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

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			
		}
	}
	
}
