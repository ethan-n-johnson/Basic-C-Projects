// Ethan Johnson 1002008374
// Coding Assignment 6

#include <stdio.h>

#define MAX_ROWS 9
#define MAX_COLS 9
#define TICKET_LIMIT 4

void FillMovieTheater(char MovieTheater[][MAX_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            MovieTheater[i][j] = 'O';
        }
    }
}

void PrintSeatMap(char MovieTheater[][MAX_COLS], int rows, int cols)
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
            printf("%7c", MovieTheater[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int IsSeatSold(char MovieTheater[][MAX_COLS], int ArrayRow, int ArrayColumn)
{
    if (MovieTheater[ArrayRow][ArrayColumn] == 'X')
    {
        return 1;
    }
    return 0;
}

int main()
{
    char MovieTheater[MAX_ROWS][MAX_COLS] = {};
    int ArrayRow = 0, ArrayColumn = 0;
    int purchasedTickets = 0, soldTickets = 0;
    int numberOfRows = 0, numberOfSeats = 0;
    char Row = ' ';
    int Seat = 0;
    printf("How big is the move theater? ");

    do
    {
        printf("How many rows does your movie theater have? (1-%d) ", MAX_ROWS);
        scanf(" %d", &numberOfRows);
        if (numberOfRows < 1 || numberOfRows > MAX_ROWS)
        {
            printf("Rows must be between 1 and %d. Please reenter.\n", MAX_ROWS);
        }

    }
    while (numberOfRows < 1 || numberOfRows > MAX_ROWS);

    do
    {
        printf("How many seat are there per row? (1-%d) ", MAX_COLS);
        scanf(" %d", &numberOfSeats);
        if (numberOfSeats < 1 || numberOfSeats > MAX_COLS)
        {
            printf("Columns must be between 1 and %d. Please reenter.\n", MAX_COLS);
        }
        
    }
    while (numberOfSeats < 1 || numberOfSeats > MAX_COLS);

    FillMovieTheater(MovieTheater, numberOfRows, numberOfSeats);
    
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
            PrintSeatMap(MovieTheater, numberOfRows, numberOfSeats);
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
            else if(IsSeatSold(MovieTheater, ArrayRow, ArrayColumn))
            {
                printf("Seat %c%d is already sold. Pick a different seat.\n\n", ArrayRow+65, Seat);
            }
            else
            {
                MovieTheater[ArrayRow][ArrayColumn] = 'X';
                soldTickets++;
            }
        }

        printf("Please find your way to your seats using this map...\n\n");
        PrintSeatMap(MovieTheater, numberOfRows, numberOfSeats);
        printf("Enjoy your movie!");
    }

    return 0;
}