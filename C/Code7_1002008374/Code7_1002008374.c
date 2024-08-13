// Ethan Johnson 1002008374
// Coding Assignment 7

#include <stdio.h>
#include <stdlib.h>

#define MAX_ROWS 9
#define MAX_COLS 9
#define TICKET_LIMIT 4

void FillMovieTheater(char TheaterSize[][MAX_COLS], int rows, int cols, char MovieTheater[])
{
    int x = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++, x++)
        {
            TheaterSize[i][j] = MovieTheater[x];
        }
    }
}

void PrintSeatMap(char TheaterSize[][MAX_COLS], int rows, int cols)
{
    printf("           ");
    for (int i = 0; i < cols; i++)
    {
        printf("Seat %d ", i+1);
    }
    printf("\n");
    
    for (int i = 0; i < rows; i++)
    {
        printf("ROW %c", i+65);
        for (int j = 0; j < cols; j++)
        {
            printf("%7c", TheaterSize[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int IsSeatSold(char TheaterSize[][MAX_COLS], int ArrayRow, int ArrayColumn)
{
    if (TheaterSize[ArrayRow][ArrayColumn] == 'X')
    {
        return 1;
    }
    return 0;
}

void WriteMovieTheater(char TheaterSize[][MAX_COLS], int rows, int cols)
{
    char OutputFileName[100] = {};
    FILE *OutputFile = NULL;
    printf("Enter output filename ");
    scanf("%s", OutputFileName);
    OutputFile = fopen(OutputFileName, "w+");
    if (OutputFile == NULL)
    {
        printf("File did not open");
        exit(0);
    }
    fprintf(OutputFile, "%d %d\n", rows, cols);
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            fprintf(OutputFile, "%c", TheaterSize[i][j]);
        }
    }
}

int main()
{
    int purchasedTickets = 0, soldTickets = 0;
    int ArrayRow = 0, ArrayColumn = 0;
    int numberOfRows = 0, numberOfSeats = 0;
    char Row = ' ';
    int Seat = 0;
    char MovieTheater[100] = {};
    FILE *InputFile = NULL;
    char InputFileName[100] = {};
    char TheaterSize[MAX_ROWS][MAX_COLS] = {};

    printf("Enter the name of your Movie Theater file ");
    scanf("%s", InputFileName);
    InputFile = fopen(InputFileName, "r");
    if (InputFile == NULL)
    {
        printf("File did not open.");
        exit(0);
    }
    
    fscanf(InputFile, "%d %d ", &numberOfRows, &numberOfSeats);
    fgets(MovieTheater, sizeof(MovieTheater), InputFile);
    fclose(InputFile);
    FillMovieTheater(TheaterSize, numberOfRows, numberOfSeats, MovieTheater);
    
    do
    {
        printf("How many tickets would you like to purchase? (limit %d) ", TICKET_LIMIT);
        scanf(" %d", &purchasedTickets);
        if (purchasedTickets > TICKET_LIMIT || purchasedTickets < 0)
        {
            printf("This is a special showing - limit of %d tickets per purchase\n", TICKET_LIMIT);
        }
    } 
    while (purchasedTickets > TICKET_LIMIT || purchasedTickets < 0);
    printf("\n");

    if (purchasedTickets == 0)
    {
        printf("No movie for you!\n");
    }
    else
    {
        while (soldTickets < purchasedTickets)
        {            
            PrintSeatMap(TheaterSize, numberOfRows, numberOfSeats);
            printf("Enter seat choice by entering the row and seat\nPlease pick a seat ");
            scanf(" %c%d", &Row, &Seat);
            printf("\n");

            if(Row > 90)
            {
                ArrayRow = Row-97;
            }
            else
            {
                ArrayRow = Row-65;
            }

            ArrayColumn = Seat-1;
            if (ArrayRow+1 > numberOfRows || ArrayRow < 0 || ArrayColumn > numberOfSeats-1 || ArrayColumn < 0)
            {
                printf("That seat is not in this theater!!\n\n");
            }
            else if(IsSeatSold(TheaterSize, ArrayRow, ArrayColumn))
            {
                printf("Seat %c%d is already sold. Pick a different seat.\n\n", ArrayRow+65, Seat);
            }
            else
            {
                TheaterSize[ArrayRow][ArrayColumn] = 'X';
                soldTickets++;
            }
        }

        printf("Please find your way to your seats using this map...\n\n");
        PrintSeatMap(TheaterSize, numberOfRows, numberOfSeats);
        printf("Enjoy your movie!\n");
    }
    WriteMovieTheater(TheaterSize, numberOfRows, numberOfSeats);
    return 0;
}