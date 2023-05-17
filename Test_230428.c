#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	/*
	Q1. 사용자로부터 정수 3개를 입력받아 각 a,b,c에 저장을 하고
	조건연산자를 이용하여 이 변수들 중에 가장 큰 값을 구해 출력하는
	프로그램을 작성하라.

	//제출한 풀이
	int a, b, c;

	printf("정수 3개 : ");
	scanf("%d %d %d", &a, &b, &c);
	printf("가장 큰 값은? %d\n", (a>b)&&(a>c) ? a : (b>a) && (b>c) ? b : c);

	//오답노트
	int a, b, c, res;
	
	printf("정수 3개 : ");
	scanf("%d %d %d", &a, &b, &c);

	res = (a > b) ? a : b;
	printf("가장 큰 값은? %d\n", (res > c) ? res : c);
	*/
	

	/*
	Q2. 두 개의 정수를 입력받아 두 수의 차를 출력하는 프로그램을 작성하라.
	단, 무조건 큰 수에서 작은 수를 빼야 한다.
	ex > 12 5	-> 7
	     4  16	-> 12 
	case1. if~else문을 이용해서 작성
	case2. 조건연산자를 이용해서 작성 

	int a, b, res;

	printf("정수 2개 : ");
	scanf("%d %d", &a, &b);

	//case1
	if (a > b)
	{
		res = a - b;
	}
	else
	{
		res = b - a;
	}

	//case2
	res = (a > b) ? a - b : b - a;

	printf("두 수의 차 : %d\n", res);
	*/

	/*
	Q3. 학생이 전체 평균 점수에 대한 학점을 출력하는 프로그램을 작성.
		성적이 90점 이상 A, 성적이 80점 이상 B,
		성적이 70점 이상 C, 성적이 60점 이상 D,
		그 미만은 F로 처리한다.
		
		프로그램 실행시 국어, 영어, 수학의 점수를 입력받는다.
		그 평균을 구하고, 위 평가기준을 참고하여 적절한 학점을 출력한다.

	int kor, eng, mat, avg; //국어, 영어, 수학, 평균
	char credit; //학점

	printf("국어, 영어, 수학의 점수는? ");
	scanf("%d %d %d", &kor, &eng, &mat);

	avg = (kor + eng + mat) / 3;

	if (avg >= 80)
	{
		if (avg < 90)
		{
			credit = 'B';
		}
		else
		{
			credit = 'A';
		}
	}
	else if (avg >= 60)
	{
		if (avg < 70)
		{
			credit = 'D';
		}
		else
		{
			credit = 'C';
		}
	}
	else
	{
		credit = 'F';
	}

	printf("학점 : %c\n", credit);
	*/

	/*
	Q4. Factorial 계산, 어떤 양의 정수 n을 입력 받아서
		n! 구하는 프로그램을 작성하시오.
		**정수 n을 입력 받으면 1부터 n까지의 곱
	
	int n, i, res;

	printf("정수 n의 값은? ");
	scanf("%d", &n);

	res = 1;

	for (i = 1; i <= n ; i++)
	{
		res *= i;
	}

	printf("n!의 값 : %d\n", res);
	*/

	/*
	Q5. 두 수를 입력 받아 두 수 사이에 존재하는 정수의 합을
		구하는 프로그램 작성
		ex) 3 5 or 5 3
			3 + 4 + 5 => 12 
	
	int a, b, i, min, max, res = 0;

	printf("정수 a, b의 값은? ");
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}

	for (i = min;i <= max;i++)
	{
		res += i;
	}

	printf("두 수 사이에 존재하는 정수의 합 : %d\n", res);
	*/

	/*
	Q6. 사용자로부터 양의 정수 M과 N을 입력받아
		N개 만큼 M의 배수를 출력하는 프로그램을 작성하라.
		ex) 3 4 
		 => 3 6 9 12
	*/
	
	/*int M, N, i, res;

	printf("정수 M의 값은? ");
	scanf("%d", &M);
	printf("M의 배수를 몇 개 출력하시겠습니까? ");
	scanf("%d", &N);

	printf("%d개 만큼의 %d의 배수 : ", N, M);

	for (i = 1; i <= N; i++)
	{
		res = i * M;
		printf("%d ", res);
	}
	*/
	/* 오답노트
	int N, M;

	printf("양의 정수 N, M : ");
	scanf("%d %d", &N, &M);

	printf("%d개 만큼의 %d의 배수 : ", N, M);

	for (int i = 1; i <= N; i++)
	{
		printf("%d ", M * i);
	}
	*/

	/*
	Q7. 사용자로부터 계속 정수를 입력 받아 그 값을 더 해 나가는 프로그램을 작성하라.
		단, 사용자가 0을 입력할 때까지 계속 되어야 하며 0이 입력되면
		입력된 모든 정수의 합을 출력한다.
		** do~while문 사용
	*/
	
	int a, sum = 0; //사용자가 입력하는 정수, 합

	printf("합을 구할 정수들을 입력하시오.(0 입력 시, 입력된 모든 정수의 합이 출력됨)\n");

	do
	{
		scanf("%d", &a);
		sum += a;
	} while (a != 0);

	printf("입력된 모든 정수의 합 : %d\n", sum);

	return 0;
}