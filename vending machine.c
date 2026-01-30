#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void) {
	int menu;
	int money;
	int choice;
	int price;
	int money2;
	char name[100] = { 0 };
	int buy;

	while (1) {
		printf("=====자판기======\n");

		printf("메뉴를 선택해주세요:\n");

		printf("1.콜라(1500원) 2.사이다(1400원) 3.환타(1350원)\n");
		scanf("%d", &menu);
		if (menu == 1) {
			strcpy(name, "콜라");
			choice = menu;
			price = 1500;
		}
		else if (menu == 2) {
			strcpy(name, "사이다");
			choice = menu;
			price = 1400;
		}
		else if (menu == 3) {
			strcpy(name, "환타");
			choice = menu;
			price = 1350;
		}
		else {
			printf("메뉴를 다시 선택해주세요.\n");
			printf(" \n");
			continue;
		}

		printf("선택한 메뉴는 %d번 %s입니다.\n", menu, name);

		printf("금액을 투입해주세요:");
		scanf("%d", &money);
		printf("투입된 금액: %d\n", money);

		money2 = money - price;
		if (money2 < 0) {
			printf("돈이 부족합니다.\n");
			printf("===================\n");
			printf(" \n");
		}
		else {
			printf("선택하신 %s이 나왔습니다.\n", name);
			printf("거스름돈:%d\n", money2);
			printf("===================\n");
			printf(" \n");
		}
		printf("다시 구매 하시겠습니까?(1/0)\n");
		scanf("%d", &buy);

		if (buy == 1) {
			continue;
		}
		else {
			break;
		}
	}
}