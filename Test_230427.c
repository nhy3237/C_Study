#include <stdio.h>

int main()
{
	int OneHour = 60, OneDay = 60 * 24, OneYear = 60 * 24 * 365;
	int mSmoke = 220;	//��� 1ȸ ���� �� ����Ǵ� ��
	int minusTotMin; //�پ�� �� ��
	int minusMin, minusHour, minusDay, minusYear; //�پ�� ���� ��, �ð�, ��, �⵵
	int N = 20, M = 3;

	int Smoke = 365* M * N; // ����� Ƚ��

	minusTotMin = mSmoke * Smoke; // �پ�� ���� �������
	
	minusYear = (minusTotMin / OneYear);
	minusDay = ((minusTotMin % OneYear) / OneDay);
	minusHour = minusTotMin / OneHour; //(((minusTotMin % OneYear) % OneDay)/ OneHour);
	minusMin = (minusTotMin % 60);
	
	printf("�پ�� ���� : %02d�� %02d�� %02d�� %02d��\n", minusYear, minusDay, minusHour, minusMin);

	int personYear = 100; //�ΰ� ���� �⵵
	int personMin = 100 * 365 * 60 * 24; //�ΰ� ���� ��
	int mTotLife = personMin - (minusTotMin); //������ �� ��
	int mLife, hLife, dLife, yLife; //������ ���� ��, �ð�, ��, �⵵

	yLife = (mTotLife / OneYear);
	dLife = ((mTotLife % OneYear) / OneDay);
	hLife = (((mTotLife % OneYear) % OneDay) / OneHour);
	mLife = (mTotLife % 60);
	
	printf("��� ���� : %02d�� %02d�� %02d�� %02d��\n", yLife, dLife, hLife, mLife);

	return 0;
}