#include <stdio.h>

int main()
{
	int OneHour = 60, OneDay = 60 * 24, OneYear = 60 * 24 * 365;
	int mSmoke = 220;	//담배 1회 폈을 때 단축되는 분
	int minusTotMin; //줄어든 총 분
	int minusMin, minusHour, minusDay, minusYear; //줄어든 수명 분, 시간, 일, 년도
	int N = 20, M = 3;

	int Smoke = 365* M * N; // 담배핀 횟수

	minusTotMin = mSmoke * Smoke; // 줄어든 수명 몇분인지
	
	minusYear = (minusTotMin / OneYear);
	minusDay = ((minusTotMin % OneYear) / OneDay);
	minusHour = minusTotMin / OneHour; //(((minusTotMin % OneYear) % OneDay)/ OneHour);
	minusMin = (minusTotMin % 60);
	
	printf("줄어든 수명 : %02d년 %02d일 %02d시 %02d분\n", minusYear, minusDay, minusHour, minusMin);

	int personYear = 100; //인간 수명 년도
	int personMin = 100 * 365 * 60 * 24; //인간 수명 분
	int mTotLife = personMin - (minusTotMin); //기대수명 총 분
	int mLife, hLife, dLife, yLife; //기대수명 수명 분, 시간, 일, 년도

	yLife = (mTotLife / OneYear);
	dLife = ((mTotLife % OneYear) / OneDay);
	hLife = (((mTotLife % OneYear) % OneDay) / OneHour);
	mLife = (mTotLife % 60);
	
	printf("기대 수명 : %02d살 %02d일 %02d시 %02d분\n", yLife, dLife, hLife, mLife);

	return 0;
}