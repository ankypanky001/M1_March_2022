#include <stdio.h>
#include <stdlib.h>
#include "snake_and_ladder_util.h"

int main()
{
	int i, dice, cur_pos1 = 0, cur_pos2 = 0;
	char ch;
	while (1)
	{
		printf("SNAKES ARE FROM: | 25 to 9  | 65 to 40 | 99 to 1  |\n\nLADDERS ARE FROM: | 13 to 42 | 60 to 83 | 70 to 93 |\n\n");
		printf("Choose who plays --> \n");
		printf("[1] Player 1\n");
		printf("[2] Player 2\n");
		printf("[3] Exit\n");
		scanf("%s", &ch);

		switch (ch)
		{

		case '1':
			dice = randomiser();
			system("cls");
			printf("\n\n--------------------------------------------------------------------------\n");
			printf("\t\t\t    SNAKES AND LADDERS\n");
			printf("--------------------------------------------------------------------------\n");
			cur_pos1 = dice + cur_pos1;
			if (cur_pos1 < 101)
			{
				if (cur_pos1 == 99)
				{
					displayBoard(1, "-P1-"); // snake
				}
				if (cur_pos1 == 65)
				{
					displayBoard(40, "-P1-"); // snake
				}
				if (cur_pos1 == 25)
				{
					displayBoard(9, "-P1-"); // snake
				}
				if (cur_pos1 == 70)
				{
					displayBoard(93, "-P1-"); // ladder
				}
				if (cur_pos1 == 60)
				{
					displayBoard(83, "-P1-"); // ladder
				}
				if (cur_pos1 == 13)
				{
					displayBoard(42, "-P1-"); // ladder
				}
				else
				{
					displayBoard(cur_pos1, "-P1-");
				}
				printf("\t\t\t\tDice = %d\n", dice);
				printf("--------------------------------------------------------------------------\n");
			}
			else
			{
				cur_pos1 = cur_pos1 - dice;
				printf("Range exceeded of Player 1.\n");
				displayBoard(cur_pos1, "-P1-");
			}
			printf("Player 2 position is %d\n\n", cur_pos2); //display p2 position

			break;
		case '2':
			dice = randomiser();
			system("cls");
			printf("\n\n--------------------------------------------------------------------------\n");
			printf("\t\t\t    Snakes And Ladders\n");
			printf("--------------------------------------------------------------------------\n");
			cur_pos2 = dice + cur_pos2;
			if (cur_pos2 < 101)
			{
				if (cur_pos2 == 99) // snake
				{
					displayBoard(1, "$-P2-");
				}
				if (cur_pos2 == 65) // snake
				{
					displayBoard(40, "-P2-");
				}
				if (cur_pos2 == 25) // snake
				{
					displayBoard(9, "-P2-");
				}
				if (cur_pos2 == 70) // ladder
				{
					displayBoard(93, "-P2-");
				}
				if (cur_pos2 == 60) // ladder
				{
					displayBoard(83, "-P2-");
				}
				if (cur_pos2 == 13) // ladder
				{
					displayBoard(42, "-P2-");
				}
				else
				{
					displayBoard(cur_pos2, "-P2-");
				}
				printf("\t\t\t\tDice = %d\n", dice);
				printf("--------------------------------------------------------------------------\n");
			}

			else
			{
				cur_pos2 = cur_pos2 - dice;
				printf("Range exceeded of Player 2.\n");
				displayBoard(cur_pos2, "-P2-");
			}
			printf("Player 1 position is %d\n\n", cur_pos1); //display p1 position
			break;
		case '3':
			exit(0);
			break;

		default:
			printf("Incorrect choice :( Try Again :) \n");
		}
	}
	return 0;
}