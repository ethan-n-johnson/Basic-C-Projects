// Ethan Johnson 1002008374
// Coding Assignment 5

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMBEROFREROLLS 3
#define NUMBEROFFACES 6
#define NUMBEROFDICE 5

void RollDice(int dice[])
{
    srand(time(0));
    for(int i = 0; i < NUMBEROFDICE; i++)
    {
        dice[i] = rand() % NUMBEROFFACES;
        dice[i]++; 
    }
}

void PrintRoll(int dice[])
{
    for(int i = 0; i < NUMBEROFDICE; i++)
    {
        printf("%d  ", dice[i]);
    }
    printf("\n");
}

int HowManyFaces(int dice[], int SearchFace)
{
    int NumberOfFaces = 0;
    for(int i = 0; i < NUMBEROFDICE; i++)
    {
        if(dice[i] == SearchFace)
        {
            NumberOfFaces++;
        }
    }
    return NumberOfFaces;
}

int main(void)
{
    int dice[NUMBEROFDICE] = {};
    int howMany[NUMBEROFFACES] = {};

    int numberOfRolls = 0;
    int numberOfReRolls = NUMBEROFREROLLS;
    char Answer = ' ';

    int ofAKind = 0;
    int FullHouse = 0;
    int TwoPair = 0;
    int CSlam = 0;
    int LargeStraight = 0;
    int SmallStraight = 0;
    int i = 0;

    do
    {
        RollDice(dice);
        printf("You Rolled\n\n");
        printf("Roll #%d\n", numberOfRolls+1);
        PrintRoll(dice);
        numberOfRolls++;

        for (i = 0; i < NUMBEROFFACES; i++)
        {
            howMany[i] = HowManyFaces(dice, i+1);
        }

        for (i = 0; i < NUMBEROFFACES; i++)
        {
            if (howMany[i] == 3)
            {
                FullHouse += 3;
            }
            if (howMany[i] == 2)
            {
                FullHouse += 2;
                TwoPair++;
            }
            if (howMany[i] == NUMBEROFDICE)
            {
                CSlam++;
            }
            if (howMany[i] == 3)
            {
                FullHouse += 3;
            }
            if (howMany[i] == 1)
            {
                LargeStraight++;
            }
            else if (howMany[i] == 0 && 5 > LargeStraight && LargeStraight > 0)
            {
                LargeStraight = 0;
            }
            if (howMany[i] >= 1)
            {
                SmallStraight++;
            }
            else if (howMany[i] == 0 && 4 > SmallStraight && SmallStraight > 0)
            {
                SmallStraight = 0;
            }
            if (howMany[i] == 4)
            {
                ofAKind = 4;
            }
            if (howMany[i] == 3)
            {
                ofAKind = 3;
            }
        }
        
        if (LargeStraight == 5)
        {
            printf("Large Straight");
        }
        else if (SmallStraight >= 4)
        {
            printf("Small Straight");
        }
        else if (FullHouse == 5)
        {
            printf("Full House");
        }
        else if (CSlam == 1)
        {
            printf("CSlam!");
        }
        else if (ofAKind == 4)
        {
            printf("Four of a Kind");
        }
        else if (ofAKind == 3)
        {
            printf("Three of a Kind");
        }
        else if (TwoPair == 2)
        {
            printf("Two Pair");
        }
        else
        {
            printf("You Have Nothing.");    
        }
        printf("\n\n\n");
        if (numberOfRolls != numberOfReRolls)
        {
            printf("Do you want to reroll? ");
            scanf(" %c", &Answer);
            printf("\n");
        }

        ofAKind = 0;
        FullHouse = 0;
        TwoPair = 0;
        TwoPair = 0;
        CSlam = 0;
        LargeStraight = 0;
        SmallStraight = 0;
    } 
    while (Answer == 'y' && numberOfRolls < numberOfReRolls);
    return 0;
}