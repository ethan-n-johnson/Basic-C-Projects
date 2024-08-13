// Ethan Johnson 1002008374
// Coding Assignment 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int RandomNumber()
{
    int MyRandomNumber = 0;
    srand(time(0));
     
    MyRandomNumber = rand() % 20; 
    MyRandomNumber++;
    return MyRandomNumber;
}

void MenuPrompt()
{
    int choice = 0;
    printf("Pick one of the following questions \n\n");
    printf("1.    Will I trip and fall today?\n");
    printf("2.    Will it be sunny tommorow?\n");
    printf("3.    Will it be warm tommorow?\n");
    printf("4.    Will I do well on my OLQ?\n");
    printf("5.    Will I pass Calculus 1?\n\n");

    printf("You chose question: ");
    scanf("%d", &choice);
    printf("\n");

    while (choice < 1 || choice > 5)
    {
        printf("Please choose a valid question. \n");
        printf("You chose question: ");
        scanf("%d", &choice);
        printf("\n");
    }
}

int main(void)
{
    int MyRandomNumber = RandomNumber();
    MenuPrompt();

    switch (MyRandomNumber)
    {
    case 1:
        printf("It is certain.\n");
        break;

    case 2:
        printf("It is decidely so.\n");
        break;

    case 3:
        printf("Without a doubt.\n");
        break;

    case 4:
        printf("Yes definitely.\n");
        break;

    case 5:
        printf("You may rely on it.\n");
        break;

    case 6:
        printf("As I see it, yes.\n");
        break;

    case 7:
        printf("Most likely.\n");
        break;

    case 8:
        printf("Outlook good.\n");
        break;

    case 9:
        printf("Yes.\n");
        break;

    case 10:
        printf("Signs point to yes.\n");
        break;

    case 11:
        printf("Reply hazy, try again.\n");
        break;

    case 12:
        printf("Ask again later.\n");
        break;

    case 13:
        printf("Better not tell you now.\n");
        break;

    case 14:
        printf("Cannot predict now.\n");
        break;

    case 15:
        printf("Concentrate and ask again.\n");
        break;

    case 16:
        printf("Don't count on it.\n");
        break;

    case 17:
        printf("My reply is no.\n");
        break;

    case 18:
        printf("My sources say no.\n");
        break;

    case 19:
        printf("Outlook not so good.\n");
        break;

    case 20:
        printf("Very doubtful.\n");
        break;

    default:
        printf("Not sure how we got here.");
    }
}