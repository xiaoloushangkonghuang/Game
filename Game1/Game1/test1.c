#define _CRT_SECURE_NO_WARNINGS 
#include "game.h"
#include <stdio.h>
void menu()
{
	printf("*****************************\n");
	printf("*******1.play 0.exit*********\n");
	printf("*****************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	Initboard(board, ROW, COL);
	Displayboard(board, ROW, COL);
	while (1)
	{
		//�������
		PlayMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret  =IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret= IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}	
		


	}
			if (ret == '*')
			printf("���Ӯ\n");
		else if (ret == '#')
			printf("����Ӯ\n");
		else
			printf("ƽ��\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}