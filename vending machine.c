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
	int a1 = 5;
	int a2 = 4;
	int a3 = 0;
	char refund;
	while (1) {
		
		
		printf("=====자판기======\n");

		printf("메뉴를 선택해주세요:\n");

		printf("1.콜라(1500원) %d개 2.사이다(1400원) %d개 3.환타(1350원) %d개\n",a1,a2,a3);
		scanf("%d", &menu);
		if (menu == 1) {
			strcpy(name, "콜라");
			choice = menu;
			price = 1500;
			a1--;
			if (a1 == -1) {
				printf("콜라는 품절 되었습니다 다른 메뉴를 선택해주세요\n");
				a1++;
				continue;
			}

		}
		else if (menu == 2) {
			strcpy(name, "사이다");
			choice = menu;
			price = 1400;
			a2--;
			if (a2 == -1) {
				printf("사이다는 품절 되었습니다 다른 메뉴를 선택해주세요\n");
				a2++;
				continue;
			}
		}
		else if (menu == 3) {
			strcpy(name, "환타");
			choice = menu;
			price = 1350;
			a3--;
			if (a3 == -1) {
				printf("환타는 품절 되었습니다 다른 메뉴를 선택해주세요\n");
				a3++;
				continue;
			}
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

		printf("환불을 원하시면 0 계속 진행하실려면 엔터를 눌러주세요\n");
		scanf("%d", &refund);
		if (refund == 0) {
			if (menu == 1) {
				a1++;
			}
			else if (menu == 2) {
				a2++;
			}
			else if (menu == 3) {
				a3++;
			}
			printf("%d원이 환불되었습니다.\n", money);
			continue;
		}
		money2 = money - price;
		if (money2 < 0) {
			printf("돈이 %d원 부족합니다.\n",money2);
			printf("===================\n");
			printf(" \n");

			if (menu == 1) {
				a1++;
			}
			else if (menu == 2) {
				a2++;
			}
			else if (menu == 3) {
				a3++;
			}
			continue;
		}
		else {
			printf("선택하신 %s가 나왔습니다.\n", name);
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