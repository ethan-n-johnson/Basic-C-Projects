// Ethan Johnson 1002008374
// Coding Assignment 4

#include <stdio.h>
#include <stdlib.h>

int GetValue(char string1[], char string2[])
{
    int value = 0;
    printf("Enter the %s value for the %s loop ", string1, string2);
    scanf(" %d", &value);
    return value;
}

int CheckValues(int lesser, int greater)
{
    if (greater < lesser)
    {
        printf("\n");
        printf("Starting value must be less than ending value. Please reenter\n\n");
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    char yourCharacter = 0;

    int startOuter = 0, endOuter = 0;
    int startMiddle = 0, endMiddle = 0;
    int startInner = 0, endInner = 0;

    printf("Enter the character you want to use ");
    scanf("%c", &yourCharacter);

    do
    {
        startOuter = GetValue("starting", "outer");
        endOuter = GetValue("end", "outer");
    } 
    while (CheckValues(startOuter, endOuter));

    do
    {
        startMiddle = GetValue("starting", "middle");
        endMiddle = GetValue("end", "middle");
    } 
    while (CheckValues(startMiddle, endMiddle));

    do
    {
        startInner = GetValue("starting", "inner");
        endInner = GetValue("end", "inner");
    } 
    while (CheckValues(startInner, endInner));

    printf("\n\n");

    for (int i = startOuter; i < endOuter; i++)
    {
        for (int i = startMiddle; i < endMiddle; i++)
        {
            for (int i = startInner; i < endInner; i++)
            {
                printf("%c", yourCharacter);
            }
            printf("\n");
        }
        printf("\n\n");
    }
}