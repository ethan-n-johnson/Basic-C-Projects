#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int upperOrLower = 0;
    int userAscii = 0;

    char upperAscii = 64;
    char lowerAscii = 96;
    char totalAscii = 0;

    printf("Choose if you want an uppercase or lowercase letter (1 for uppercase, 2 for lowercase, or 999 to quit): ");
    scanf("%d", &upperOrLower);
    printf("\n");

    while(upperOrLower != 999 && upperOrLower != 1 && upperOrLower != 2)
    {
        printf("Please enter a valid value (1 for uppercase, 2 for lowercase, or 999 to quit): ");
        scanf("%d", &upperOrLower);
        printf("\n");
    }

    if (upperOrLower == 1)
    {
        printf("Enter a letter's position in the alphabet (1-26): ");
        scanf("%d", &userAscii);
        printf("\n");
        while (userAscii < 1 || userAscii > 26)
        {
            printf("Please enter a valid value (1-26): ");
            scanf("%d", &userAscii);
            printf("\n");
        }
        totalAscii = userAscii + upperAscii;
        printf("The letter at position %d is %c its ASCII value is %d", userAscii, totalAscii, totalAscii);
        printf("\n");
    }

    else if (upperOrLower == 2)
    {
        printf("Enter a letter's position in the alphabet (1-26): ");
        scanf("%d", &userAscii);
        printf("\n");
        while (userAscii < 1 || userAscii > 26)
        {
            printf("Please enter a valid value (1-26): ");
            scanf("%d", &userAscii);
            printf("\n");
        }
        totalAscii = userAscii + lowerAscii;
        printf("The letter at position %d is %c its ASCII value is %d", userAscii, totalAscii, totalAscii);
        printf("\n");
    }
    
    else
    {
        printf("Exiting...");
    }

    system("pause");
}