#define _CRT_SECURE_NO_WARNINGS 1

//������������Ϸ


#include"game.h"


void game()//��Ϸʵ��
{
	//��������洢������Ϣ
	char board[ROW][COL] = { 0 };//ȫ���ո�
	//��ʼ������ 
	InitBoard(board,ROW,COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
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