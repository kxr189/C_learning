#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

int IsFull(char board[ROW][COL], int row, int col)
{
	//返回1表示棋盘满了
	//返回0表示棋盘没满
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//三行的判断
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][2] == board[i][1] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//三列的判断
	for (i = 0; i <col; i++)
	{
		if (board[0][i] == board[1][i] && board[2][i] == board[1][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//两个对角线的判断
		if (board[0][0] == board[1][1] && board[2][2] == board[1][1] && board[1][1] != ' ')
		{
			return board[1][1];
		}
		if (board[2][0] == board[1][1] && board[0][2] == board[1][1] && board[1][1] != ' ')
		{
			return board[1][1];
		}
		//判断是否平局
		if (1 == IsFull(board, ROW, COL))
		{
			return 'Q';
		}
		else
			return 'C';
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走：>\n");
	while (1)
	{
		x = rand()%row;
		y = rand()%col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走：>\n");
	while (1)
	{
		printf("请输入落子坐标：>");
		scanf("%d%d", &x, &y);
		//判断x，y坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用!\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
}

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;

	for (i = 0; i < row; i++)
	{
		int j = 0;
		//打印一行数据
		for (j=0;j<col;j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
			if (j == col - 1)
				printf("\n");

		}	
		//打印分隔行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|"); 
				}
				else
					printf("\n");
			}
		}
	}
} 