#define _CRT_SECURE_NO_WARNINGS 1

//������������Ϸ


#include"game.h"


void game()//��Ϸʵ��
{
	char ret = 0;
	//��������洢������Ϣ
	char board[ROW][COL] = { 0 };//ȫ���ո�
	//��ʼ������ 
	InitBoard(board,ROW,COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//����
	while (1)
	{
		//�������
		//system("cls");
		PlayerMove(board, ROW, COL);
		system("cls");
		DisplayBoard(board, ROW, COL);
		//�ж������Ӯ
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Sleep(1000);//ͣ��1s
		system("cls");
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ�����Ӯ
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Sleep(1000);//ͣ��1s
		//system("cls");
	}
	if (ret == '*')
	{
		printf("��һ�ʤ��\n");
		Sleep(2000);//ͣ��2s
		system("cls");
	}
	else if (ret == '#')
	{
		printf("���Ի�ʤ��\n");
		Sleep(2000);//ͣ��2s
		system("cls");
	}
	else
	{
		printf("ƽ�֡�\n");
		Sleep(2000);//ͣ��2s
		system("cls");
	}
}
void menu()
{
	printf("*************************************************\n");
	printf("****************  1.paly   0.exit ***************\n");
	printf("*************************************************\n");
}
void test()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
		{
			game();
			//Sleep(1000);//ͣ��1s
			//system("cls");
		}
			break;
		case 0:
		{
			printf("�˳���Ϸ\n");
			Sleep(1000);//ͣ��1s
			system("cls");
		}
			break;
		default:
		{
			printf("ѡ�����������ѡ��\n");
			Sleep(1000);//ͣ��1s
			system("cls");
		}
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}