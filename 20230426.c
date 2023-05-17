#define _CRT_SECURE_NO_WARNINGS_

#include <stdio.h>
#include <stdlib.h>

int main()
{
     printf("Hello World!  1\n");
     printf("나이는 %d이고 키는 %dcm입니다.\n", 25,180);
     printf("%s의 나이는 %d이고 키는 %dcm입니다.\n", "홍길동", 25, 180);
     printf("Hello World!  2\n");
     printf("%d\n", 65);
     printf("Goot\bd\t\t !!\n");
     printf("Got\rD\n");
     printf("%d %o %x\n", 12, 12, 12);
     printf("%f \n", 1e6);
     printf("%.7f \n", 3.14e-5);
     printf("%.2le\n", 0.0000314);
     printf("%c\n",'A');
     printf("%s\n", "A");
     printf("%c은 %s입니다.\n\n", '1', "A");
     //system("Pause");

     //2-1
     10 + 20;

     //2-2) 문자열 출력
     printf("Be happy");
     printf("My friend\n\n");

     //2-3) 제어문자 출력
     printf("Be happy\n");
     printf("12345678901234567890\n");
     printf("My\tfriend\n");
     printf("Goot\bd\tchance\n");
     printf("Cow\rW\a\n\n");

     //2-4) 정수와 실수 출력
     printf("%d\n", 10);
     printf("%lf\n", 3.4);
     printf("%.1lf\n", 3.45);
     printf("%.10lf\n", 3.4);

     printf("%d과 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
     printf("%.1lf-%.1lf = %.1lf\n\n", 3.4, 1.2, 3.4 - 1.2);

     //2-5) 세 가지 진법의 정수 상수
     printf("%d\n", 12);    //10진수 정수 출력
     printf("%d\n", 014);   //8진수 정수 출력
     printf("%d\n\n", 0xc);   //16진수 정수 출력

     //2-6) 지수 형태의 실수 상수
     printf("%.1lf\n", 1e6);        //지수 형태의 실수를 소수점 형태로 출력
     printf("%.7lf\n", 3.14e-5);    //소수점 이하 7자리까지 출력
     printf("%le\n", 0.000314);     //소수점 형태의 실수를 지수 형태로 출력
     printf("%.2le\n\n", 0.0000314);  //지수 형태로 소수점 이하 둘째 자리까지 출력

     //2-7) 문자와 문자열 데이터 출력
     printf("%c\n", 'A');
     printf("%s\n", "A");
     printf("%c은 %s입니다.\n", '1', "first");

     return 0;
     
}
