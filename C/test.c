#include <stdio.h>

int main()
{
      char Array1[100] = "banana";
      char Array2[100] = "bread";
      strcpy(Array2, Array1);

      printf("%s", Array2);
}