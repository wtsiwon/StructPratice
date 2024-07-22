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
	printf("������ �׸��� ��ȣ�� �Է����ּ���.\n ex) �̸�:0, ����:1, ����:2, ����:3, ����:4, ���:5 - ");
	scanf_s("%d", &sortingDataNum);

	Calculation(student);
	Sort(student, sortingDataNum);
	Output(student,sortingDataNum);

	return 0;
}

void Input(STUDENT* arr) {

	for (int i = 0; i < SIZE; i++) {
		printf("�̸�(�ҹ���): ");
		scanf_s("%c", &arr[i].Name);
		printf("���� ����: ");
		scanf_s("%d", &arr[i].korean);
		printf("��������: ");
		scanf_s("%d", &arr[i].math);
		printf("��������: ");
		scanf_s("%d", &arr[i].english);
	}
}

void Output(STUDENT* arr, int sortNum) {

	switch (sortNum) {
	case 0:
		for (int i = 0; i < SIZE; i++) {
			printf("�̸�: %c \n��������: %d \n��������: %d \n��������: %d\n ����: %d \n���: %.1lf \n"
				, arr[i].Name, arr[i].korean, arr[i].math, arr[i].english, arr[i].sum, arr[i].avg);
		}
		break;
	case 1:
		for (int i = 0; i < SIZE; i++) {
			printf("�̸�: %c , ��������: %d",
				 arr[i].Name, arr[i].korean);
		}
		break;
	case 2:
		for (int i = 0; i < SIZE; i++) {
			printf("�̸�: %c , ��������: %d",
				arr[i].Name, arr[i].english);
		}
		break;
	case 3:
		for (int i = 0; i < SIZE; i++) {
			printf("�̸�: %c , ��������: %d",
				arr[i].Name, arr[i].math);
		}
		break;
	case 4:
		for (int i = 0; i < SIZE; i++) {
			printf("�̸�: %c , ������: %d",
				arr[i].Name, arr[i].sum);
		}
		break;
	case 5:
		for (int i = 0; i < SIZE; i++) {
			printf("�̸�: %c , �������: %.1lf",
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
