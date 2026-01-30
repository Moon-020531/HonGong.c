#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void) {

	int menu;
	int money;
	int choice;
	int price;
	printf("=====자판기======\n");

	printf("메뉴를 선택해주세요:\n");

	printf("1.콜라(500원) 2.사이다(600원) 3.환타(700원)\n");
	scanf("%d", &menu);;
	if (menu =="1"||menu=="콜라") {
		choice = menu;
		price = 500;
	}
	else if(menu == "2" || menu == "사이다"){
		choice = menu;
		price = 600;
	}
	else if (menu == "3" || menu == "환타") {
		choice = menu;
		price = 700;

	printf("선택한 메뉴는 %d번입니다.\n", menu);

	printf("금액을 투입해주세요:\n");
	scanf("%d", &money);
	printf("투입된 금액: %d", money);


}