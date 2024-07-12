#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct student
{
	char name[20];
	char score;
	int number;
	int kor, eng, math;
	int total;
	double average;

}Student;

void input(Student* st);
void ouput(Student* st, Student* index);

int main()
{
	Student st[5];
	Student index[5];

	input(st);
	ouput(st, index);

	return 0;
}

void input(Student* st)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("�й� : ");
		scanf("%d", &st[i].number);

		printf("�̸� : ");
		scanf("%s", &st[i].name);

		printf("����, ����, ���� ���� : ");
		scanf("%d %d %d", &st[i].kor, &st[i].eng, &st[i].math);
	}
}

void ouput(Student* st, Student* index)
{
	int i, j;

	printf("# ���� �� ������...\n");
	for (i = 0; i < 5; i++)
	{
		st[i].total = st[i].kor + st[i].eng + st[i].math;
		st[i].average = (double)st[i].total / 3;
		//arr[i]=average;

		if (100 >= st[i].average && st[i].average >= 90)
		{
			st[i].score = 'A';
		}
		else if (st[i].average >= 80)
		{
			st[i].score = 'B';
		}
		else if (st[i].average >= 70)
		{
			st[i].score = 'C';
		}
		else if (70 > st[i].average)
		{
			st[i].score = 'F';
		}
		printf("�й�: %2d �̸�: %s ����: %d ����: %d ����: %d ����: %d ���: %.1lf ���: %c\n"
			, st[i].number, st[i].name, st[i].kor, st[i].eng, st[i].math, st[i].total, st[i].average, st[i].score);
	}

	printf("\n");
	printf("# ���� �� ������...\n");

	for (i = 0; i < 5; i++)
	{
		index[i] = st[i];

		for (j = i - 1; j >= 0 && st[j].average < index[i].average; j--)
		{
			st[j + 1] = st[j];
		}
		st[j + 1] = index[i];
	}
	for (i = 0; i < 5; i++)
	{
		printf("�й�: %2d �̸�: %s ����: %d ����: %d ����: %d ����: %d ���: %.1lf ���: %c\n"
			, st[i].number, st[i].name, st[i].kor, st[i].eng, st[i].math, st[i].total, st[i].average, st[i].score);
	}

}
