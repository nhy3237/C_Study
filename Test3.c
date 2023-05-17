#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
	int num; //학번
	char name[20]; //이름
	int kor; //국어 학점
	int mat; //수학 학점
	int eng; //영어 학점
	int rank;
	double avg; //학점 평균

	struct student* next;
};

void Input_arr();
void Output_arr();
void Search();

int main()
{
	
	return 0;
}

void Input_arr()
{

}

void Output_arr()
{

}

void Search()
{

}