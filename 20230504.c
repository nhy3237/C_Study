#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void swap(int* pa, int* pb);

int main()
{
	// 8-1) 5���� ���̸� ������ �迭�� �����ϰ� ����ϴ� ���
	int ary[5];

	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	//scanf("%d", &ary[3]);

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n\n", ary[4]);

	// 8-2,3) �迭�� �ݺ����� ����� ���� ó�� ���α׷�, sizeof ������
	//int score[5];
	//int i;
	//int total = 0;
	//double avg;

	//int size = sizeof(score) / sizeof(score[0]); //�迭 score ������ score�� ���� �ϳ� 

	//for (i = 0; i < size; i++)
	//{
	//	scanf("%d", &score[i]);
	//}

	//for (i = 0; i < size; i++)
	//{
	//	total += score[i];
	//}
	//avg = total / (double)size;

	//for (i = 0; i < size; i++)
	//{
	//	printf("%5d", score[i]);
	//}
	//printf("\n");

	//printf("��� : %.1lf\n", avg);

	// 8-4) ���ڿ��� �����ϴ� char�� �迭
	/*char str[80] = "applejam";

	int i;

	printf("���� ���ڿ� : %s\n", str);
	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("�Է� �� ���ڿ� : %s\n\n", str);*/

	// 8-5) ���ڿ��� �����ϴ� strcpy �Լ�
	/*char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s, %s\n\n", str1, str2);*/

	// 8-6) ��ĭ�� ������	 ���ڿ� �Է�
	/*char str[80];

	printf("���ڿ� �Է� : ");
	gets(str);
	puts("�Էµ� ���ڿ� : ");
	puts(str);*/

	// 8-7) �� ���ڰ� ���� ���ڿ�
	char str[5];

	str[0] = 'O';
	str[1] = 'K';
	printf("%s\n\n", str);

	// 9-1) ������ �޸� �ּ� Ȯ��
	int a;
	double b;
	char c;

	printf("int�� ������ �ּ� : %u\n", &a);
	printf("double�� ������ �ּ� : %u\n", &b);
	printf("char�� ������ �ּ� : %u\n\n", &c);

	// 9-2) �������� ����� ���
	int a1;
	int* pa;

	pa = &a;
	*pa = 10;

	printf("�����ͷ� a �� ��� : %d\n", *pa); // : *pa == a
	printf("���������� a �� ��� : %d\n", a);
	printf("�����ͷ� a �ּҰ� ��� : %d\n", pa);
	printf("���������� a �ּҰ� ��� : %d\n\n", &a);

	//scanf("%d", pa); // : scanf("%d", &a);

	// 9-3) �����͸� ����� �� ������ �հ� ���
	int a2 = 10, b2 = 15, total;
	double avg;
	int* pa1, * pb1;
	int* pt = &total;
	double* pg = &avg;

	pa1 = &a2;
	pb1 = &b2;

	*pt = *pa1 + *pb1;
	*pg = *pt / 2.0;

	pa1 = pb1;

	printf("a �ּ� : %d, b �ּ� : %d, pa1 �ּ� : %d, pb1 �ּ� : %d", &a, &b, pa1, pb1);

	printf("�� ������ �� : %d, %d\n", *pa1, *pb1);
	printf("�� ������ �� : %d\n", *pt);
	printf("�� ������ ��� : %.1lf\n\n", *pg);


	// 9-4) �����Ϳ� const ���
	int a3 = 10, b3 = 20;
	const int* pa3 = &a3; //*pa3 ��ü�� ���� �ٲ� �� ����. ����� �ּ��� ���� a3���δ� ���� �ٲ� �� �ִ�.

	printf("���� a3 �� : %d\n", *pa3);
	pa3 = &b3;
	printf("���� b3 �� : %d\n", *pa3);
	pa3 = &a3;
	a3 = 20;
	printf("���� a3 �� : %d\n\n", *pa3);

	// 9-5) �ּҿ� �������� ũ��
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	printf("char�� ������ �ּ� ũ�� : %d\n", sizeof(&ch));
	printf("int�� ������ �ּ� ũ�� : %d\n", sizeof(&in));
	printf("double�� ������ �ּ� ũ�� : %d\n", sizeof(&db));

	printf("char * �������� ũ�� : %d\n", sizeof(pc));
	printf("int * �������� ũ�� : %d\n", sizeof(pi));
	printf("double * �������� ũ�� : %d\n", sizeof(pd));

	printf("char * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pc));
	printf("int * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pi));
	printf("double * �����Ͱ� ����Ű�� ������ ũ�� : %d\n\n", sizeof(*pd));

	// 9-6)������ �ʴ� �������� ����
	// �����ʹ� ����Ű�� ������ ���°� ���� ���� �����ؾ� �Ѵ�.
	int a4 = 10;
	int* p = &a4;
	double* pd1;

	pd1 = p; //�������� �޶� ������.
	printf("%lf\n", *pd);

	// 9-7)�����͸� ����� �� ������ �� ��ȯ
	int aa = 10, bb = 20;

	swap(&aa, &bb);
	printf("aa:%d, b:%d\n", aa, bb);

	return 0;
}

void swap(int* pa, int* pb)
{
	int temp;
	
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}