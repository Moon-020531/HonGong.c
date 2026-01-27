#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int disp_menu();

int main(void){

	int sel;										//선택된 번호를 담을 변수

	sel = disp_menu();								//입력값을 저장
	printf("선택된 메뉴는 %d번입니다.", sel);		//출력

	return 0;


}

int disp_menu() {
	int a;											//번호를 담을 변수
	printf("1. 볶음짬뽕\n");
	printf("2. 콩나물국밥\n");
	printf("3. 바지락칼국수\n");

	printf("##메뉴를 선택하세요: ");
	scanf("%d", &a);									//번호 입력받기

	return a;											//입력된 번호 반환
}