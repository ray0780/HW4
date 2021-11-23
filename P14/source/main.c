#include <stdio.h>
#include <stdlib.h>
#define STUDENTS 3
#define EXAM 4

int minimum(const int grade[][EXAM], int pupils, int test);
int maximum(const int grade[][EXAM], int pupils, int test);
double av(const int set[], int test);
void printarray(int grades[][EXAM], int pupils, int test);

int main(void)
{
	int student;
	const int studentgrudes[STUDENTS][EXAM] = { {77,68,86,73},
										   {96,87,89,78},
										   {70,90,86,81} };

	printf("The arrary is:\n");
	printarray(studentgrudes, STUDENTS, EXAM);

	printf("\n\nLowest grade: %d\nHighest grade: %d\n", 
		minimum(studentgrudes, STUDENTS, EXAM), 
		maximum(studentgrudes, STUDENTS, EXAM));

	for (student = 0; student < STUDENTS; student++)
	{
		printf("The average grade for student %d is %.2f\n",
			student, av(studentgrudes[student],EXAM));
	}

		system("pause");
		return 0;
}

void printarray(int grades[][EXAM], int pupils, int test)
{
	int i, j;
	printf("                 [0]  [1]  [2]  [3]");

	for (i = 0; i < pupils; i++)
	{
		printf("\nstudentGrades[%d] ", i);
		for  (j=0;j<test;j++)
		{
			printf("%-5d", grades[i][j]);
		}
	}
}

int minimum(const int grade[][EXAM], int pupils, int test)
{
	int i, j, lowgrade = 100;
	for (i=0;i<pupils;i++)
	{
		for (j = 0; j < test; j++)
		{
			if (grade[i][j] < lowgrade)
			{
				lowgrade=grade[i][j];
			}
		}
	}
	return lowgrade;
}
int maximum(int grade[][EXAM], int pupils, int test)
{
	int i, j, high = 0;
	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < test; j++)
		{
			if (grade[i][j] > high)
			{
				high = grade[i][j];
			}
		}
	}
	return high;
}

double av(const int set[], int test)
{
	int i, total = 0;
	for (i = 0; i < test; i++)
	{
		total += set[i];
	}
	return (double)total / test;
}