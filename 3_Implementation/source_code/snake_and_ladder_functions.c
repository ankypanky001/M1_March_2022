#include <stdio.h>
#include <stdlib.h>
#include "snake_and_ladder_util.h"

int randomiser()
{
    int rem;
REPEAT:
    rem = rand() % 7;
    if (rem == 0)
        goto REPEAT;
    else
        return rem;
}

void displayBoard(int currentPositionOfPlayer, char player[4])
{
    int i, j, t, c, sft = 0, diceResult, position1, position2;

    if (currentPositionOfPlayer == 100)
    {
        printf("** \n\nPlayer %s wins!! **\n", player);
        scanf("%*s");
        exit(0);
    }

    for (i = 10; i > 0; i--)
    {
        t = i - 1;
        if ((sft % 2) == 0)
        {
            c = 0;
            for (j = 10; j >= 1; j--)
            {
                diceResult = (i * j) + (t * c++);

                if (currentPositionOfPlayer == diceResult)
                    printf("%s\t", player);
                else
                    printf("%d\t", diceResult);
            }
            sft++;
        }
        else
        {
            c = 9;
            for (j = 1; j <= 10; j++)
            {
                diceResult = (i * j) + (t * c--);

                if (currentPositionOfPlayer == diceResult)
                    printf("%s\t", player);
                else
                    printf("%d\t", diceResult);
            }

            sft++;
        }
        printf("\n\n");
    }

    printf("--------------------------------------------------------------------------\n");
}