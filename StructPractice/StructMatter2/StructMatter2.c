#include <stdio.h>
#include <string.h>
#define SIZE 3

typedef struct student {
	char Name;
	int korean;
	int math;
	int english;
	int sum;
	double avg;
}STUDENT;

void Input(STUDENT* arr);
void Output(STUDENT* arr, int sortingNum);
void Calculation(STUDENT* arr);
void Sort(STUDENT* arr, int Num);

int main() {

	STUDENT student[SIZE] = { 0 };
	int sortingDataNum = 0;

	Input(student);
	printf("정렬할 항목의 번호를 입력해주세요.\n ex) 이름:0, 국어:1, 영어:2, 수학:3, 총점:4, 평균:5 - ");
	scanf_s("%d", &sortingDataNum);

	Calculation(student);
	Sort(student, sortingDataNum);
	Output(student,sortingDataNum);

	return 0;
}

void Input(STUDENT* arr) {

	for (int i = 0; i < SIZE; i++) {
		printf("이름(소문자): ");
		scanf_s("%c", &arr[i].Name);
		printf("국어 점수: ");
		scanf_s("%d", &arr[i].korean);
		printf("수학점수: ");
		scanf_s("%d", &arr[i].math);
		printf("영어점수: ");
		scanf_s("%d", &arr[i].english);
	}
}

void Output(STUDENT* arr, int sortNum) {

	switch (sortNum) {
	case 0:
		for (int i = 0; i < SIZE; i++) {
			printf("이름: %c \n국어점수: %d \n수학점수: %d \n영어점수: %d\n 총점: %d \n평균: %.1lf \n"
				, arr[i].Name, arr[i].korean, arr[i].math, arr[i].english, arr[i].sum, arr[i].avg);
		}
		break;
	case 1:
		for (int i = 0; i < SIZE; i++) {
			printf("이름: %c , 국어점수: %d",
				 arr[i].Name, arr[i].korean);
		}
		break;
	case 2:
		for (int i = 0; i < SIZE; i++) {
			printf("이름: %c , 영어점수: %d",
				arr[i].Name, arr[i].english);
		}
		break;
	case 3:
		for (int i = 0; i < SIZE; i++) {
			printf("이름: %c , 수학점수: %d",
				arr[i].Name, arr[i].math);
		}
		break;
	case 4:
		for (int i = 0; i < SIZE; i++) {
			printf("이름: %c , 총점수: %d",
				arr[i].Name, arr[i].sum);
		}
		break;
	case 5:
		for (int i = 0; i < SIZE; i++) {
			printf("이름: %c , 평균점수: %.1lf",
				arr[i].Name, arr[i].avg);
		}
		break;
	}
}

void Calculation(STUDENT* arr) {
	for (int i = 0; i < SIZE; i++) {
		arr[i].sum = arr[i].korean + arr[i].math + arr[i].english;
		arr[i].avg = arr[i].sum / 3;
	}
}

void Sort(STUDENT* arr, int Num) {

	STUDENT temp;

	switch (Num) {
	case 0:
		for (int i = 0; i < SIZE - 1; i++) {
			for (int j = 0; j < SIZE - 1; j++) {
				if (arr[j].Name > arr[j + 1].Name) {
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
		break;
	case 1:
		for (int i = 0; i < SIZE - 1; i++) {
			for (int j = 0; j < SIZE - 1; j++) {
				if (arr[j].korean > arr[j + 1].korean) {
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
		break;
	case 2:
		for (int i = 0; i < SIZE - 1; i++) {
			for (int j = 0; j < SIZE - 1; j++) {
				if (arr[j].english > arr[j + 1].english) {
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
		break;
	case 3:
		for (int i = 0; i < SIZE - 1; i++) {
			for (int j = 0; j < SIZE - 1; j++) {
				if (arr[j].math > arr[j + 1].math) {
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
		break;
	case 4:
		for (int i = 0; i < SIZE - 1; i++) {
			for (int j = 0; j < SIZE - 1; j++) {
				if (arr[j].sum > arr[j + 1].sum) {
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
		break;
	case 5:
		for (int i = 0; i < SIZE - 1; i++) {
			for (int j = 0; j < SIZE - 1; j++) {
				if (arr[j].avg > arr[j + 1].avg) {
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
		break;
	}



}
