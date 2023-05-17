#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void print_ary(int* pa, int size);

void input_ary(double* pa, int size);
void output_ary(double* pa, int size);
double find_max(double* pa, int size);

void my_gets(char* str, int size);


int main()
{
	int arr[5] = { 1,2,3,4,5 };

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);
	}

	*(arr + 1) = 99; // arr[0] = 99;

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("\n\n");

	// 10-1) �迭�� ���� ������ �����Ͽ� �迭 ��� ���
	int ary[3];

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;

	/*printf("�� ��° �迭 ��ҿ� Ű���� �Է� : ");
	scanf("%d", ary + 2);*/

	for (int i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i));
	}
	printf("\n\n");

	// 10-2) �迭��ó�� ���Ǵ� ������
	int ary1[3];
	int* pa = ary1;

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];

	for (int i = 0; i < 3; i++)
	{
		printf("%5d\n", pa[i]);
		printf("%5d\n", *(pa + i));
		printf("%5d\n", pa + i);
	}
	printf("\n\n");

	// 10-3) �����͸� �̿��� �迭�� �� ���
	int ary2[3] = { 10,20,30 };
	int* pa2 = ary2;

	printf("�迭�� �� : ");
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", *pa);
		pa++;
	}
	printf("\n\n");

	int a = 10;
	int* pa3 = &a;

	printf("%d\n", &a);		//a�� ���� �ּ�
	printf("%d\n", pa3);	//pa3�� ���� �ּ� == a�� ���� �ּ�
	printf("%d\n", *pa3);	//*pa3 == a
	pa3 = pa3 + 1;			//pa3�� ���� �ּ� + 1
	printf("%d\n", pa3);	//pa3�� ���� �ּ� == a�� ���� �ּ� + 4byte
	printf("%d\n", a);		// a == 10
	printf("%d\n\n", *pa3);	//�����Ⱚ

	// 10-4)�������� ������ ���� ����
	int ary4[5] = { 10,20,30,40,50 };
	int* pa4 = ary4;		//ù ��° �迭 ����� �ּ�
	int* pb4 = pa4 + 3;		//�� ��° �迭 ����� �ּ�

	printf("pb4 : %u\n", pa4);
	pa4++;					//pa4 �ּҸ� ���� �迭 ��ҷ� �̵�
	printf("pb4 : %u\n", pb4);
	printf("pb4 : %u\n", pa4);
	printf("pb4 - pa4 : %u\n", pb4 - pa4);
	printf("arr4 - (arr4 + 2) : %u\n", ary4 - (ary4 + 2));

	printf("�տ� �ִ� �迭 ����� �� ��� : ");
	if (pa4 < pb4) printf("%d\n\n", *pa4);
	else printf("%d\n", *pb4);

	// 10-5, 6) �迭�� ó���ϴ� �Լ�
	int ary5[5] = { 10,20,30,40,50 };
	int ary6[7] = { 10,20,30,40,50,60,70 };
	int size1 = sizeof(ary5) / sizeof(ary5[0]);
	int size2 = sizeof(ary6) / sizeof(ary6[0]);

	print_ary(ary5, size1);
	printf("\n");
	print_ary(ary6, size2);
	printf("\n\n");

	// 10-7) �迭�� ���� �Է��ϴ� �Լ�
	double ary7[5];
	double max;
	int size = sizeof(ary7) / sizeof(ary7[0]);

	//input_ary(ary7, size);
	//output_ary(ary7, size);
	//max = find_max(ary7, size);
	//printf("�迭�� �ִ� : %.1lf\n\n", max);
	
	// 11-4) ���۸� ����ϴ� ���� �Է�
	/*char ch;

	while (1)
	{
		for (int i = 0; i < 3; i++)
		{
			scanf("%c", &ch);
			printf("%c", ch);
		}
	}*/

	// 11-6) getchar �Լ��� ����� ���ڿ� �Է�
	/*char str8[7];

	my_gets(str8, sizeof(str8));
	printf("�Է��� ���ڿ� : %s\n", str8);*/

	// 11-7) ������ ������ ������ �ϴ� ���
	int num, grade;

	printf("�й� �Է� : ");
	scanf("%d", &num);


	return 0;
}

void print_ary(int* pa, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);
	}
}

void input_ary(double* pa, int size)
{
	printf("%d���� �Ǽ��� �Է� : ", size);
	for (int i = 0; i < size; i++)
	{
		scanf("%lf", pa + i);
	}
}

void output_ary(double* pa, int size)
{
	printf("�Է��� �Ǽ��� ��� : ");
	for (int i = 0; i < size; i++)
	{
		printf("%.1lf ", pa[i]);
	}
	printf("\n");
}

double find_max(double* pa, int size)
{
	double max;
	
	max = pa[0];

	for (int i = 1; i < size; i++)
	{
		if (pa[i] > max) max = pa[i];
	}

	return max;
}

void my_gets(char* str, int size)
{
	int ch;
	int i = 0;

	ch = getchar();
	while ((ch != '\n') && (i < size - 1))
	{
		str[i] = ch;
		i++;
		ch = getchar();
	}
	str[i] = '\0';
}