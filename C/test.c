#include <stdio.h> 
#include <stdlib.h>

int main(void) 
{ 
   int x = 0;
   int y = 0;
   int size = 10;
   int array[size][size];

   for(int i = 0; i < size; i++){
      x = x + 1;
      y = y + 2;
      printf("%c ", array[x][y]);
      printf("\n");
   }

   system("pause");
   return 0; 
}  