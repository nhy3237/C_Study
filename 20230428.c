#include <stdio.h>

int main()
{
	//4-8) �� ��ȯ �����ڰ� �ʿ��� ���
	int a = 20, b = 3;
	double res;
	int res1;

	res1 = a / b;
	res = ((double)a) / ((double)b); // (double)�� ����� a�� b�� ���� �Ǽ��� ��ȯ
	printf("a = %d, b = %d\n", a, b);
	printf("a / b�� ��� : %.1lf, %d\n", res, res1);

	a = (int)res;
	printf("(int) %.1f�� ��� : %d\n\n", res, a); // (int)�� ����� res�� ������ ���� �κи� �߸�

	//4-9) sizeof �������� ��� ��
	int a1 = 10;
	double b1 = 3.4;

	printf("int�� ������ ũ�� : %d\n", sizeof(a1));
	printf("double�� ������ ũ�� : %d\n", sizeof(b1));
	printf("������ ������ ũ�� : %d\n", sizeof(10));
	printf("������ �ᱣ���� ũ�� : %d\n", sizeof(1.5+3.4));
	printf("char �ڷ����� ũ�� : %d\n\n", sizeof(char));

	//4-10) ���մ��� ������
	int a2 = 10, b2 = 20;
	int res2 = 2;

	a2 += 20;
	res2 *= b2 + 10;

	printf("a2 = %d, b2 = %d\n", a2, b2);
	printf("res2 = %d\n\n", res2);

	//4-11) �޸� ������
	int a3 = 10, b3 = 20;
	int res3;

	res3 = (++a3, ++b3);

	printf("a:%d, b:%d\n", a3, b3);
	printf("res:%d\n\n", res3);

	//4-12) ���� ������
	int a4 = 10, b4 = 20, res4;

	res4 = (a4 > b4) ? a4 : b4;
	printf("ū �� : %d\n\n", res4);

	//4-13) ��Ʈ ������� ���
	int a5 = 10, b5 = 12;

	printf("a5 & b5 : %d\n", a5 & b5);
	printf("a5 ^ b5 : %d\n", a5 ^ b5);
	printf("a5 | b5 : %d\n", a5 | b5);
	printf("~a5 : %d\n", ~a5);
	printf("a5 << 1 : %d\n", a5 << 1);
	printf("a5 >> 2 : %d\n\n", a5 >> 2);

	//4-14) ������ �켱������ ���� ����
	int a11 = 10, b11 = 5;
	int res5;

	res5 = a11 / b11 * 2;			// �켱 ������ �����Ƿ� ���ʺ���
	printf("res5 = %d\n", res5);
	res5 = ++a11 * 3;				// a11�� ���� 1������Ű�� 3�� ����
	printf("res5 = %d\n", res5);
	res5 = a11 > b11 && a11 != 5;	// a11 > b11�� ����� a11 != 5�� ����� &&����
	printf("res5 = %d\n", res5);
	res5 = a11 % 3 == 0;			// a11 % 3�� ���� 3�� ������ Ȯ��
	printf("res5 = %d\n\n", res5);

	//5-1) if��
	int a6 = 5, b6 = 0;
	if (a6 > 10)
	{
		b6 = a6;
	}

	printf("a6 : %d, b6 : %d\n\n", a6, b6);

	//5-2) if~else���� ���
	int a7 = 10;

	if (a7 >= 0)
	{
		a7 = 1;
	}
	else
	{
		a7 = -1;
	}

	printf("a7 : %d\n\n", a7);

	//5-3) if~else if~else�� ���
	int a8 = 0, b8 = 0;

	if (a8 > 0)
	{
		b8 = 1;
	}
	else if (a8 == 0)
	{
		b8 = 2;
	}
	else
	{
		b8 = 3;
	}

	printf("b8 : %d\n\n", b8);

	//5-4,5) ��ø�� if��
	int a9 = 20, b9 = 10;

	if (a9 > 10)
	{
		if (b9 >= 0)
		{
			b9 = 1;
		}
		else
		{
			b9 = -1;
		}
	}

	printf("a9 : %d, b9 : %d\n\n", a9, b9);

	//5-6) switch~case���� ���
	int rank = 1, m = 0;

	switch (rank)
	{
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}

	printf("m : %d\n\n", m);

	//6-1) while���� ����� �ݺ���
	int a10 = 1;

	while (a10 < 10)
	{
		printf("a10 : %d\n", a10);
		a10 = a10 * 2;
	}

	for (int a10 = 3; a10 < 10; a10 *= 2)
	{
		printf("%d\n", a10);
	}

	printf("%d\n\n", a10);

	//6-3) do~while���� ����� �ݺ���
	int a12 = 1;

	do
	{
		a12 = a12 * 2;
	} while (a12 < 10);
	printf("a12 : %d\n", a12);

	return 0;
}

