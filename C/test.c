#include <stdio.h>


int ShiftRight(int bitA, int shift_amount)
{
      return bitA >> shift_amount;
}
int ShiftLeft(int bitA, int shift_amount)
{
      return bitA << shift_amount;
}

int main()
{
      int bit5 = 101;
      int shift_amount = 1;
      printf("%d\n", bit5);
      printf("Shifted Left by %d: %d\n", shift_amount, ShiftLeft(bit5, shift_amount));
      printf("Shifted Right by %d: %d\n", shift_amount, ShiftRight(bit5, shift_amount));
}