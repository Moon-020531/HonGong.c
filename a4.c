#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int km;
	int kmh;
	int hour;
	int min;
	double sec;
	double time;

	printf("거리와 속력을 입력하세요: ");
	scanf("%d %d", &km, &kmh);					//거리와 속력을 입력받음

	time = (double)km / (double)kmh;			// 거리/속력 = 시간
	hour = (int)time;							//시간에서 시간부분만 추출
	min = (int)((time - hour) * 60);			//시간에서 분부분만 추출
	sec = (((time - hour) * 60 - min) * 60);	//시간에서 초부분만 추출

	printf("소요시간은 %d시간%d분%.3lf초입나다", hour, min, sec);		//출력
	
}