#define _CRT_SECURE_NO_WARNINGS 1

//测试三子棋游戏


#include"game.h"


void game()//游戏实现
{
	//创建数组存储棋盘信息
	char board[ROW][COL] = { 0 };//全部空格
	//初始化棋盘 
	InitBoard(board,ROW,COL);
	//打印棋盘
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
		printf("请选择：>");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
		{
			game();
			//Sleep(1000);//停留1s
			//system("cls");
		}
			break;
		case 0:
		{
			printf("退出游戏\n");
			Sleep(1000);//停留1s
			system("cls");
		}
			break;
		default:
		{
			printf("选择错误，请重新选择！\n");
			Sleep(1000);//停留1s
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