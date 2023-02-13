#include <stdio.h>

int Add(void)
{
    int total = 0;
    int x = 0;
    int y = 0;

    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("Enter a value for y: ");
    scanf("%d", &y);

    total = x + y;
    printf("%d + %d = %d", x,y, total);
    return 0;
}
int Subtract(void)
{
    int total = 0;
    int x = 0;
    int y = 0;

    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("Enter a value for y: ");
    scanf("%d", &y);

    total = x - y;
    printf("%d - %d = %d", x,y, total);
    return 0;
}

int Multiply(void)
{
    int total = 0;
    int x = 0;
    int y = 0;

    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("Enter a value for y: ");
    scanf("%d", &y);

    total = x * y;
    printf("%d * %d = %d", x,y, total);
    return 0;
}

int Divide(void)
{
    int total = 0;
    int x = 0;
    int y = 0;

    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("Enter a value for y: ");
    scanf("%d", &y);

    total = x / y;
    printf("%d / %d = %d", x,y, total);
    return 0;
}
int main(void)
{
    char userChoice = 0;
    char YesOrNo;

    printf("Would you like to add, subtract, multiply, or divide? (a, s, m, or d) ");
    scanf(" %c", &userChoice);
    
    if (userChoice == 'a')
    {
        Add();
    }

    else if (userChoice == 's')
    {
        Subtract();
    }

    else if (userChoice == 'm')
    {
        Multiply();
    }

    else if (userChoice == 'd')
    {
        Divide();
    }

    else
    {
        printf("Invalid input \nExiting...");
    }

    
    return 0;
}