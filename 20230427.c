#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() //main���� int���� void���� �ִ�.
{
	char	alphabet = 'a';
	int		year = 2023, month = 4;
	float	pi = 3.14f; //���� ��Ȯ�ϰ� �ϰ� ���� �� ���� �ڿ� f�� �ٿ��ش�.
	double	doublePI = 3.14;

	year = month;

	//3-1) ������ ����� ���
	int a;
	int b, c;
	double da;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("���� a�� �� : %d\n", a);
	printf("���� b�� �� : %d\n", b);
	printf("���� c�� �� : %d\n", c);
	printf("���� da�� �� : %.1lf\n", da);
	printf("���� ch�� �� : %c\n\n", ch);

	//3-2) char���� ���� ���
	char ch1 = 'A';
	char ch2 = 65;

	printf("���� %c�� �ƽ�Ű �ڵ� �� : %d\n", ch1, ch1);
	printf("�ƽ�Ű �ڵ� ���� %d�� ���� : %c\n\n", ch2, ch2);

	//3-3) ���� ���� ������ ����/ �ڷ��� ũ�� ���
	short sh = 61000;
	printf("%d\n", sh);

	printf("long long���� ũ�� : %d����Ʈ\n\n", sizeof(long long));

	//3-4) unsigned�� �߸� ����� ���
	unsigned int a1;

	a1 = 4294967295;
	printf("%d\n", a1);
	a1 = -1;
	printf("%u\n\n", a1);

	//3-5) ��ȿ ���� Ȯ��
	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;

	printf("float�� ������ �� : %.20f\n", ft);
	printf("double�� ������ �� : %.20lf\n", db);

	printf("%f\n", 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);
	printf("%.20lf\n\n", 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

	//3-6) char �迭�� ���ڿ� ����
	char fruit[11] = "strawberry";

	printf("���� : %s\n", fruit);
	printf("����´ : %s %s\n\n", fruit, "jam");

	//3-7) char �迭�� ���ڿ� ����
	strcpy(fruit, "banana"); //strcpy �Լ��� ����Ϸ��� string.h ��� ������ �����մϴ�.
	printf("% s\n\n", fruit);

	//3-8) const�� ����� ����
	int income = 0;
	double tax;
	const double tax_rate = 0.12; //const�� �ʱ�ȭ�� ���� �ٲ� �� ����.(���ó�� ���)

	income = 456;
	tax = income * tax_rate;
	printf("������ : %.1lf�Դϴ�.\n\n", tax);

	//�ĺ��� ǥ��� - ������ ��Ȯ�ϰ�
	int My_Student_Number;
	int nNumber = 0;
	int iNumber = 0;
	char cA = 'c';
	char strName[128];
	char sName[128];
	float fNumber = 0.0f;
	double dNumber = 0.0;

	//Ȯ�ι���
	int kor = 70, eng = 80, mat = 90;
	int tot;

	tot = kor + eng + mat;
	printf("���� : %d, ���� : %d, ���� : %d\n", kor, eng, mat);
	printf("���� : %d\n\n", tot);

	//3-9) scanf �Լ��� ����� Ű���� �Է�
	/*int age;
	printf("���̸� �Է��Ͻÿ� : ");
	scanf("%d", &age);
	printf("���̴� %d �Դϴ�. \n\n", age);

	//3-10) scanf �Լ��� ����� ���� �Է�
	float height;
	printf("���̿� Ű�� �Է��Ͻÿ� : ");
	scanf("%d%f", &age, &height);
	printf("���̴� %d��, Ű�� %.1fcm�Դϴ�.\n\n", age, height);

	//3-11) ���ڿ� ���ڿ� �Է�
	char grade;
	char name[20];

	printf("���� �Է� : ");
	scanf("%c", &grade);

	printf("�̸� �Է� : ");
	scanf("%s", name);
	printf("%s�� ������ %c�Դϴ�.\n\n", name, grade);*/

	//4-1) ����, ����, ����, ����, ���� ����
	int aaa, bbb;
	int sum, sub, mul, inv;

	aaa = 10;
	bbb = 20;
	sum = aaa + bbb;
	sub = aaa - bbb;
	mul = aaa * bbb;
	inv = -aaa;

	printf("a�� �� :%d, b�� �� :%d\n", aaa, bbb);
	printf("���� : %d\n", sum);
	printf("���� : %d\n", sub);
	printf("���� : %d\n", mul);
	printf("a�� ���� ���� : %d\n\n", inv);

	//4-2) ��� �������� ���ϴ� ����
	double apple;
	int banana, orange;

	apple = 5.0 / 2.0;
	banana = 5 / 2;
	orange = 5 % 2;

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n\n", orange);

	int aa = 5.0 / 2;
	int bb = 5 / 2.0;

	printf("%d %d\n", aa, bb);
	printf("%f %f\n", aa, bb); //Ʋ��. aa�� bb�� int�� �����̱� ������ ��°��� ������

	double a2 = 5.0 / 2;
	double b2 = 5 / 2.0;

	printf("%f %f\n", a2, b2);
	printf("%d %d\n\n", a2, b2); //Ʋ��. a2�� b2�� double�� �����̱� ������ ��°��� �Ǽ���

	//4-3) ������������ ����
	int a3 = 10, b3 = 10;

	++a3;
	--b3;

	printf("a3 : %d\n", a3);
	printf("b3 : %d\n\n", b3);

	//4-4) ����, ���� ǥ�⸦ ����� ���� ����
	int a4 = 5, b4 = 5;
	int pre, post;

	printf("�ʱ갪 a4 = %d, b4 = %d\n", a4, b4);
	
	pre = (++a4) * 3;	//������ ���� ������
	post = (b4++) * 3;	//������ ���� ������

	printf("���簪 a4 = %d, b4 = %d\n", a4, b4);
	printf("������: (++a4) * 3 = %d, ������: (b4++) * 3 = %d\n\n", pre, post);

	//4-5) ���� ������ �ᱣ�� Ȯ��
	int a5 = 10, b5 = 20, c5 = 10;
	int res;

	res = (a5 > b5);
	printf("a5 > b5 : %d\n", res);
	res = (a5 >= b5);
	printf("a5 >= b5 : %d\n", res);
	res = (a5 < b5);
	printf("a5 < b5 : %d\n", res);
	res = (a5 <= b5);
	printf("a5 <= b5 : %d\n", res);
	res = (a5 <= c5);
	printf("a5 <= c5 : %d\n", res);
	res = (a5 == b5);
	printf("a5 == b5 : %d\n", res);
	res = (a5 != c5);
	printf("a5 != c5 : %d\n\n", res);

	//4-6) �� ������ �ᱣ�� Ȯ��
	int a10 = 30;
	int res10;
	
	res10 = (a10 >10) && (a10 <20);
	printf("(a10 > 10) && (a10 < 20) : %d\n", res10);
	res10 = (a10 < 10) || (a10 > 20);
	printf("(a10 < 10) || (a10 > 20) : %d\n", res10);
	res10 = !(a10 >= 30);
	printf("! (a10 >= 30) : %d\n\n", res10);

	//4-7) ������ �ᱣ���� ����ϴ� ���
	int a11 = 10, b11 = 20, res11;

	a11 + b11; //���� ����� ������
	printf("%d + %d = %d\n", a11, b11, a11 + b11); //���� ����� �ٷ� ��¿� ���

	res11 = a11 + b11; //���� ����� ������ ����
	printf("%d + %d = %d\n\n", a11, b11, res11); //����� ���� ��� ���

	//Ȯ�� ����1
	double a6 = 4.0, b6 = 1.2;

	printf("%.1lf + %.1lf = %.1lf\n", a6, b6, a6 + b6);
	printf("%.1lf - %.1lf = %.1lf\n", a6, b6, a6 - b6);
	printf("%.1lf * %.1lf = %.1lf\n", a6, b6, a6 * b6);
	printf("%.1lf / %.1lf = %.1lf\n\n", a6, b6, a6 / b6);

	//Ȯ�� ����2
	int a7, b7, tot1;
	double avg;

	printf("�� ������ ���� : ");
	scanf("%d %d", &a7, &b7);
	tot1 = a7 + b7;
	avg = tot1 / 2.0;

	printf("��� : %.1lf\n\n", avg);

	return 0;
	
}