#include <stdio.h>
#include <Windows.h>
void item();
void roomDisplayer(Room (*apart)[5]);
int sum = 0;
typedef struct room {
	int lastDate;
	int productUse[6];

} Room;

typedef struct cardInfo {
	int parse1, parse2, parse3, parse4;
	int cvc, cardNumber;
};
int main() {
	Room apart[15][5];
	int an, floor, room, length, sw, day = 0;
again:
	do
	{

		while (1)
		{
			system("cls");
			printf("%d�����Դϴ�.\n", day + 1);
			roomDisplayer(apart);
			printf("\n����� ������ ���� �ܼ�...\n���� ȣ�ǹ�ȣ�� �Է��ϼ���.\n�������� �Ѿ���� -1�� �Է��ϼ���.\n���α׷��� �����Ϸ��� -2�� �Է��ϼ���.\n");
		floor:
			scanf("%d", &floor);
			if (floor == -1)
			{
				day = day + 1;
				goto again;
			}
			if (floor == -2) goto EXIT_POINT;
			if (floor < 1 || floor > 15) goto floor;
		room:
			scanf("%d", &room);
			if (room < 1 || room > 5) goto room;
			if (apart[floor - 1][room - 1].lastDate) {
				system("cls");
				printf("�̹� ����� ���Դϴ�. �ٸ� ���� �����ϼ���.\n");
				goto floor;
			}
			printf("�Ⱓ�� �Է��ϼ���.\n");
			scanf("%d", &length);
			apart[floor - 1][room - 1].lastDate = length;
			system("cls");
			sum = length * 220000;
			printf("��ǰ ���� â���� �̵��Ͻðڽ��ϱ�? (yes = 1 no = 0 )\n");
			printf(":");
			scanf("%d", &an);
			if (an == 1)
			{
				item();
			}
		pay:
			system("cls");
			printf("%d���� �����մϴ�.\n���� ����� �����ϼ���.\n", sum);
			printf("1.���� 2.�ſ�/üũī�� 3.���� ��ü\n");
			scanf("%d", &sw);
			switch (sw)
			{
			case 1:
				printf("������ �������ּ���.\n");
			bill:
				scanf("%d", &sw);
				if (sw == sum) break;
				else if (sum < sw)
				{
					sum -= sw;
					printf("%d���� ȯ�޵Ǿ����ϴ�.", -sum);
					break;
				}
				else
				{
					sum -= sw;
					printf("%d���� �� �����ϼ���.", sum);
					goto bill;
				}
			case 2:
			{
				printf("������������������������������������������������������������������������������������������\n");
				printf("��////// �����Ͻ� ī�带 �������ּ���//////  ��\n");
				printf("�� 1.����ī��                                ��\n");
				printf("�� 2.����ī��                                ��\n");
				printf("�� 3.�Ｚī��                                ��\n");
				printf("�� 4.����ī��                                ��\n");
				printf("�� 5.�ϳ�ī��                                ��\n");
				printf("�� 6.GSMī��                                 ��\n");
				printf("������������������������������������������������������������������������������������������\n");
				int parse1, parse2, parse3, parse4, passcode, cvc, cardnumber;
				scanf("%d", &cardnumber);
				printf("ī�� ��ȣ�� �Է��ϼ���.\n��) 1234 5678 2345 5678\n");
				scanf("%d %d %d %d", &parse1, &parse2, &parse3, &parse4);
			code:
				printf("��й�ȣ �� 2�ڸ��� �Է��ϼ���.\n");
				scanf("%d", &passcode);
				if (passcode < 0 || passcode > 99)
					goto code;
				printf("CVC���� �Է��ϼ���.\n");
				scanf("%d", &cvc);
			}
			break;
			case 3:
				account:
				printf("���¹�ȣ 11 ~ 14�ڸ��� �Է��ϼ���.\n:");
				char nu[15];
				getchar();
				scanf("%s", nu);
				for (int i = 0; i < 11; i++)
				{
					if (nu[i] == '\0')
					{
						goto account;
					}
				}
				break;
			default:
				goto pay;
			}
			system("cls");
		}
		day++;
		system("cls");
		for (int i = 0; i < 15; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (apart[i][j]) {
					apart[i][j]--;
					if (!apart[i][j])
					{
						printf("%d0%dȣ�� ����߽��ϴ�.\n", i + 1, j + 1);
					}
				}
			}
		}
		Sleep(3000);
		system("cls");
	} while (1);
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
void item()
{
	int pay;
	while (1)
	{
		printf("������������������������������������������������������������������������������������������\n");
		printf("�� 1.���� �߰� (+1000)                       ��\n");
		printf("�� 2.��Ǫ(+700)                              ��\n");
		printf("�� 3.����(+700)                              ��\n");
		printf("�� 4.�ٵ����(+700)                          ��\n");
		printf("�� 5.��(+1000)                               ��\n");
		printf("�� 6.������ �߰�(+15000)                     ��\n");
		printf("�� 7.����(%10d��)                      ��\n", sum);
		printf("������������������������������������������������������������������������������������������\n");

		printf("�����Ͻ� ��ǰ�� ��ȣ�� �Է����ּ���:");
		scanf("%d", &pay);

		if (pay == 1 || pay == 5)
		{
			sum += 1000;
		}
		else if (pay == 2 || pay == 3 || pay == 4)
		{
			sum += 700;
		}
		else if (pay == 5)
		{
			sum += 1000;
		}
		else if (pay == 6)
		{
			sum += 15000;
		}
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
			if (apart[i][j]) printf("�� ");
			else printf("�� ");
		}
		printf("\n");
	}
}