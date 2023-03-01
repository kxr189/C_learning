#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

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
		//��ӡһ������
		for (j=0;j<col;j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
			if (j == col - 1)
				printf("\n");

		}	
		//��ӡ�ָ���
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