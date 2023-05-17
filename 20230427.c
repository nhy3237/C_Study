#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() //main에는 int형과 void형이 있다.
{
	char	alphabet = 'a';
	int		year = 2023, month = 4;
	float	pi = 3.14f; //값을 정확하게 하고 싶을 때 숫자 뒤에 f를 붙여준다.
	double	doublePI = 3.14;

	year = month;

	//3-1) 변수의 선언과 사용
	int a;
	int b, c;
	double da;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("변수 a의 값 : %d\n", a);
	printf("변수 b의 값 : %d\n", b);
	printf("변수 c의 값 : %d\n", c);
	printf("변수 da의 값 : %.1lf\n", da);
	printf("변수 ch의 값 : %c\n\n", ch);

	//3-2) char형의 변수 사용
	char ch1 = 'A';
	char ch2 = 65;

	printf("문자 %c의 아스키 코드 값 : %d\n", ch1, ch1);
	printf("아스키 코드 값이 %d인 문자 : %c\n\n", ch2, ch2);

	//3-3) 여러 가지 정수형 변수/ 자료형 크기 출력
	short sh = 61000;
	printf("%d\n", sh);

	printf("long long형의 크기 : %d바이트\n\n", sizeof(long long));

	//3-4) unsigned를 잘못 사용한 경우
	unsigned int a1;

	a1 = 4294967295;
	printf("%d\n", a1);
	a1 = -1;
	printf("%u\n\n", a1);

	//3-5) 유효 숫자 확인
	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;

	printf("float형 변수의 값 : %.20f\n", ft);
	printf("double형 변수의 값 : %.20lf\n", db);

	printf("%f\n", 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);
	printf("%.20lf\n\n", 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

	//3-6) char 배열에 문자열 저장
	char fruit[11] = "strawberry";

	printf("딸기 : %s\n", fruit);
	printf("딸기쨈 : %s %s\n\n", fruit, "jam");

	//3-7) char 배열에 문자열 복사
	strcpy(fruit, "banana"); //strcpy 함수를 사용하려면 string.h 헤더 파일을 포함합니다.
	printf("% s\n\n", fruit);

	//3-8) const를 사용한 변수
	int income = 0;
	double tax;
	const double tax_rate = 0.12; //const는 초기화된 값을 바꿀 수 없다.(상수처럼 사용)

	income = 456;
	tax = income * tax_rate;
	printf("세금은 : %.1lf입니다.\n\n", tax);

	//식별자 표기법 - 목적이 명확하게
	int My_Student_Number;
	int nNumber = 0;
	int iNumber = 0;
	char cA = 'c';
	char strName[128];
	char sName[128];
	float fNumber = 0.0f;
	double dNumber = 0.0;

	//확인문제
	int kor = 70, eng = 80, mat = 90;
	int tot;

	tot = kor + eng + mat;
	printf("국어 : %d, 영어 : %d, 수학 : %d\n", kor, eng, mat);
	printf("총점 : %d\n\n", tot);

	//3-9) scanf 함수를 사용한 키보드 입력
	/*int age;
	printf("나이를 입력하시오 : ");
	scanf("%d", &age);
	printf("나이는 %d 입니다. \n\n", age);

	//3-10) scanf 함수를 사용한 연속 입력
	float height;
	printf("나이와 키를 입력하시오 : ");
	scanf("%d%f", &age, &height);
	printf("나이는 %d살, 키는 %.1fcm입니다.\n\n", age, height);

	//3-11) 문자와 문자열 입력
	char grade;
	char name[20];

	printf("학점 입력 : ");
	scanf("%c", &grade);

	printf("이름 입력 : ");
	scanf("%s", name);
	printf("%s의 학점은 %c입니다.\n\n", name, grade);*/

	//4-1) 대입, 덧셈, 뺄셈, 곱셈, 음수 연산
	int aaa, bbb;
	int sum, sub, mul, inv;

	aaa = 10;
	bbb = 20;
	sum = aaa + bbb;
	sub = aaa - bbb;
	mul = aaa * bbb;
	inv = -aaa;

	printf("a의 값 :%d, b의 값 :%d\n", aaa, bbb);
	printf("덧셈 : %d\n", sum);
	printf("뺄셈 : %d\n", sub);
	printf("곱셈 : %d\n", mul);
	printf("a의 음수 연산 : %d\n\n", inv);

	//4-2) 몫과 나머지를 구하는 연산
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
	printf("%f %f\n", aa, bb); //틀림. aa와 bb는 int형 변수이기 때문에 출력값도 정수형

	double a2 = 5.0 / 2;
	double b2 = 5 / 2.0;

	printf("%f %f\n", a2, b2);
	printf("%d %d\n\n", a2, b2); //틀림. a2와 b2는 double형 변수이기 때문에 출력값도 실수형

	//4-3) 증감연산자의 연산
	int a3 = 10, b3 = 10;

	++a3;
	--b3;

	printf("a3 : %d\n", a3);
	printf("b3 : %d\n\n", b3);

	//4-4) 전위, 후위 표기를 사용한 증감 연산
	int a4 = 5, b4 = 5;
	int pre, post;

	printf("초깃값 a4 = %d, b4 = %d\n", a4, b4);
	
	pre = (++a4) * 3;	//전위형 증감 연산자
	post = (b4++) * 3;	//후위형 증감 연산자

	printf("현재값 a4 = %d, b4 = %d\n", a4, b4);
	printf("전위형: (++a4) * 3 = %d, 후위형: (b4++) * 3 = %d\n\n", pre, post);

	//4-5) 관계 연산의 결괏값 확인
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

	//4-6) 논리 연산의 결괏값 확인
	int a10 = 30;
	int res10;
	
	res10 = (a10 >10) && (a10 <20);
	printf("(a10 > 10) && (a10 < 20) : %d\n", res10);
	res10 = (a10 < 10) || (a10 > 20);
	printf("(a10 < 10) || (a10 > 20) : %d\n", res10);
	res10 = !(a10 >= 30);
	printf("! (a10 >= 30) : %d\n\n", res10);

	//4-7) 연산의 결괏값을 사용하는 방법
	int a11 = 10, b11 = 20, res11;

	a11 + b11; //연산 결과는 버려짐
	printf("%d + %d = %d\n", a11, b11, a11 + b11); //연산 결과를 바로 출력에 사용

	res11 = a11 + b11; //연산 결과를 변수에 저장
	printf("%d + %d = %d\n\n", a11, b11, res11); //저장된 값을 계속 사용

	//확인 문제1
	double a6 = 4.0, b6 = 1.2;

	printf("%.1lf + %.1lf = %.1lf\n", a6, b6, a6 + b6);
	printf("%.1lf - %.1lf = %.1lf\n", a6, b6, a6 - b6);
	printf("%.1lf * %.1lf = %.1lf\n", a6, b6, a6 * b6);
	printf("%.1lf / %.1lf = %.1lf\n\n", a6, b6, a6 / b6);

	//확인 문제2
	int a7, b7, tot1;
	double avg;

	printf("두 과목의 점수 : ");
	scanf("%d %d", &a7, &b7);
	tot1 = a7 + b7;
	avg = tot1 / 2.0;

	printf("평균 : %.1lf\n\n", avg);

	return 0;
	
}