#define _CRT_SECURE_NO_WARNINGS 1
//test.c
//���ڲ�����Ϸ

#include"game.h"

void game()
{
	printf("ɨ��\n");
	//�׵���Ϣ�洢
	//1.���úõ��׵���Ϣ��
	char mine[ROWS][COLS] = { 0 };//11*11
								  

	//2.�Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };

	//��ʼ��
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS,'*');

	//��ӡ����
	DisplayBoard(mine,ROW,COL);
	//DisplayBoard(show, ROW, COL);

	//������
	SetMine(mine, ROW, COL);

	//ɨ��
	DisplayBoard(mine, ROW, COL);
	FindMine(mine,show,ROW,COL);
}

void menu()
{
	printf("*****************************\n");
	printf("*******     1.play   ********\n");
	printf("*******     0.exit   ********\n");
	printf("*****************************\n");
}

void test()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		Sleep(2000);
		system("cls");
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ~\n");
			break;
		default:
			printf("ѡ�����������ѡ��~\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}