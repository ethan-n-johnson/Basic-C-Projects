#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char word1[] = "";
    char word2[] = "";
    printf("Enter your first word: ");
    scanf("%s", &word1);
    printf("Enter your second word: ");
    scanf("%s", &word2);

    while (word1 == word2)
    {
        printf("Enter two different words:" );
        printf("Enter your second word: ");
        scanf("%s", &word2);
    }
    
    if (word1 > word2)
    {
        printf("%s comes first.", word2);
    }
    else if(word2 > word1)
    {
        printf("%s comes first.", word1);
    }
    


}