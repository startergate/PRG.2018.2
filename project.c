#include <stdio.h>
#include <Windows.h>

int sum = 0;
typedef struct cardInfo {
	int parse1, parse2, parse3, parse4, cvc, cardNumber, passcode;
} Card;

typedef struct passbook {
	char number[15];
	int passcode;
} Bank;

typedef struct paymentInfo {
	Card card;
	Bank bank;
	int currency;
} Pay;

typedef struct room {
	unsigned int lastDate;
	int productUse[6];
	Pay payment;
} Room;

void roomDisplayer(Room (*apart)[5]);
void item(Room (*apart)[5], int floor, int room);
void pay(Room(*apart)[5], int floor, int room);

int main() {
	Room apart[15][5] = { 0 };
	int an, floor, room, length, sw, day = 0;
	while (1)
	{
		while (1)
		{
			sum = 0;
			system("cls");
			printf("%d일차입니다.\n", day + 1);
			roomDisplayer(apart);
			printf("\n동행관 예약 관리자 콘솔...\n층과 호실번호를 입력하세요.\n다음날로 넘어가려면 -1를 입력하세요.\n예약 기간을 연장하려면 -2를 입력하세요.\n프로그램을 종료하려면 -3를 입력하세요.\n");
		floor:
			scanf("%d", &floor);
			if (floor == -1)
			{
				day = day + 1;
				continue;
			}
			if (floor == -2)
			{
				system("cls");
			renew:
				printf("층과 호실번호를 입력하세요.\n빠져나가려면 -1을 입력하세요.\n:");
				scanf("%d", &floor);
				if (floor == -1)
				{
					continue;
				}
				scanf("%d", &room);
				if (!apart[floor - 1][room - 1].lastDate) {
					system("cls");
					printf("예약된 방이 아닙니다. ");
					goto renew;
				}
				system("cls");
				printf("변경할 날짜를 입력하세요.\n:");
				scanf("%d", &length);
				apart[floor - 1][room - 1].lastDate += length;
				sum += length * 220000;
				item(apart, floor, room);
				pay(apart, floor, room);
			}
			if (floor == -3) goto EXIT_POINT;
			if (floor < 1 || floor > 15) goto floor;
		room:
			scanf("%d", &room);
			if (room < 1 || room > 5) {
				printf("다시 입력하세요. 빠져나가려면 -1을 입력하세요.\n");
				scanf("%d", &floor);
				if (floor == -1) continue;
				goto room;
			}
			if (apart[floor - 1][room - 1].lastDate) {
				system("cls");
				printf("이미 예약된 방입니다. 다른 방을 선택하세요.\n");
				goto floor;
			}
			printf("기간을 입력하세요.\n");
			scanf("%d", &length);
			apart[floor - 1][room - 1].lastDate = length;
			system("cls");
			sum = length * 220000;
			printf("물품 구매 창으로 이동하시겠습니까? (yes = 1 no = 0 )\n");
			printf(":");
			scanf("%d", &an);
			if (an == 1)
			{
				item(apart, floor, room);
			}
		pay:
			pay(apart, floor, room);
			system("cls");
		}
		day++;
		system("cls");
		for (int i = 0; i < 15; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (apart[i][j].lastDate) {
					apart[i][j].lastDate--;
					if (!apart[i][j].lastDate)
					{
						printf("%d0%d호가 퇴실합니다..\n", i + 1, j + 1);
					}
				}
			}
		}
		Sleep(3000);
		system("cls");
	}
EXIT_POINT:
	system("cls");
	roomDisplayer(apart);
	putchar('\n');
	printf("GOODBYE!//////////////////////////////////\n");
	printf("//////////////////////////////////////////\n");
	printf("//////////////////////////////////////////\n");
	printf("//////////////////////////////////////////\n");
	printf("//////////////////////////////////////////\n");
	printf("///////////////////////////////////////GSM\n");
	return 0;
}
void item(Room (*apart)[5], int floor, int room)
{
	int pay;
	while (1)
	{
		printf("┌───────────────────────────────────────────┐\n");
		printf("│ 1.수건 추가 (+1000)                       │\n");
		printf("│ 2.샴푸(+700)                              │\n");
		printf("│ 3.린스(+700)                              │\n");
		printf("│ 4.바디워시(+700)                          │\n");
		printf("│ 5.물(+1000)                               │\n");
		printf("│ 6.동반인 추가(+15000)                     │\n");
		printf("│ 7.결제(%10d원)                      │\n", sum);
		printf("└───────────────────────────────────────────┘\n");

		printf("구매하실 상품의 번호를 입력해주세요:");
		scanf("%d", &pay);
		apart[floor - 1][room - 1];
		if (pay == 1 || pay == 5) sum += 1000;
		else if (pay == 2 || pay == 3 || pay == 4) sum += 700;
		else if (pay == 5) sum += 1000;
		else if (pay == 6) sum += 15000;
		else if (pay == 7)
		{
			system("cls");
			break;
		}
		system("cls");
	}
}
void roomDisplayer(Room (*apart)[5]) {
	for (int i = 14; i >= 0; i--)
	{
		for (int j = 0; j < 5; j++)
		{
			if (apart[i][j].lastDate) printf("■ ");
			else printf("□ ");
		}
		printf("\n");
	}
}

void pay(Room(*apart)[5], int floor, int room) {
	int sw;
	system("cls");
	printf("%d원을 결제합니다.\n결제 방법을 선택하세요.\n", sum);
	printf("1.현금 2.신용/체크카드 3.계좌 이체\n");
	scanf("%d", &sw);
	switch (sw)
	{
	case 1:
		printf("현금을 투입해주세요.\n");
	bill:
		scanf("%d", &sw);
		if (sw == sum) break;
		else if (sum < sw)
		{
			sum -= sw;
			printf("%d원이 환급되었습니다.", -sum);
			break;
		}
		else
		{
			sum -= sw;
			printf("%d원을 더 투입하세요.", sum);
			goto bill;
		}
	case 2:
	{
		printf("┌───────────────────────────────────────────┐\n");
		printf("│ ////// 결제하실 카드를 선택해주세요////// │\n");
		printf("│ 1.신한카드                                │\n");
		printf("│ 2.현대카드                                │\n");
		printf("│ 3.삼성카드                                │\n");
		printf("│ 4.국민카드                                │\n");
		printf("│ 5.하나카드                                │\n");
		printf("│ 6.GSM카드                                 │\n");
		printf("└───────────────────────────────────────────┘\n");
		scanf("%d", &apart[floor - 1][room - 1].payment.card.cardNumber);
		printf("카드 번호를 입력하세요.\n예) 1234 5678 2345 5678\n");
		scanf("%d %d %d %d", &apart[floor - 1][room - 1].payment.card.parse1, &apart[floor - 1][room - 1].payment.card.parse2, &apart[floor - 1][room - 1].payment.card.parse3, &apart[floor - 1][room - 1].payment.card.parse4);
	code:
		printf("비밀번호 앞 2자리를 입력하세요.\n");
		int pcode;
		scanf("%d", &pcode);
		if (pcode < 0 || pcode > 99)
			goto code;
		apart[floor - 1][room - 1].payment.card.passcode = pcode;
		printf("CVC값을 입력하세요.\n");
		scanf("%d", &apart[floor - 1][room - 1].payment.card.cvc);
	}
	break;
	case 3:
	account:
		printf("계좌번호 11 ~ 14자리를 입력하세요.\n:");
		char nu[15];
		getchar();
		scanf("%s", nu);
		for (int i = 0; i < 11; i++)
		{
			if (nu[i] == '\0')
			{
				printf("다시 입력해주세요.\n");
				goto account;
			}
		}
		strcpy(apart[floor - 1][room - 1].payment.bank.number, nu);
		break;
		printf("비밀번호를 입력하세요.\n:");
		scanf("%d", &apart[floor - 1][room - 1].payment.bank.passcode);
	default:
		pay(apart, floor, room);
	}
}