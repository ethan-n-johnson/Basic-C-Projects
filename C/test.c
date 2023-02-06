#include <stdio.h> 
#include <stdlib.h>

int main(void) 
{ 
   int ascii = 0;
   char letter[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n',
   'o','p','q','r','s','t','u','v','w','x','y','z',};
   printf("Enter a letter's position in the alphabets: ");
   scanf("%d",&ascii);
   printf("\n");
   if (ascii > 26)
   {
      printf("No value exists at that number");
      return 0;
   }
   
   for(int i = 1; i <= ascii; i++){
      if (i == ascii)
      {
         printf("%s",&letter[i]);
         return 0;
      }
      
   }

   system("pause");
   return 0; 
}  