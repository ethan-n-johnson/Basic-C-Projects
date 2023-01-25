using System;
using System.Runtime.CompilerServices;

namespace Programming_Assignment_3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // This program creates an array with 50 random values.
            // It searches for the largest and smallest values in prints out their respective values and position in the array.

            Random ranNumberGenerator = new Random();
            int[] randomNumber = new int[50];
            int min = 1;
            int max = 99;
            int x = 0;
            int y = 0;

            for(int i = 0; i < 50; i++)
            {
                randomNumber[i] = ranNumberGenerator.Next(min, max);
            }
            int maxIndex = -1;
            int maxInt = Int32.MinValue;

            for (int i = 0; i < randomNumber.Length; i++)
            {
                int value = randomNumber[i];
                if (value > maxInt)
                {
                    maxInt = value;
                    maxIndex = i;
                }
            }
            
            int minIndex = -1;
            int minInt = Int32.MaxValue;
            
            for (int i = 0; i < randomNumber.Length; i++)
            {
                int value = randomNumber[i];
                if (value < minInt)
                {
                    minInt = value;
                    minIndex = i;
                }
            }
            
            for (int i = 0; i < 5; i++)
            {
                Console.Write("   ");
                x = 0;
                while (x < 10)
                {
                    if (randomNumber[y] < 10)
                    {
                        Console.Write(" ");
                    }
                    Console.Write("{0} ", randomNumber[y]);
                    x = x + 1;
                    y = y + 1;
                }
                Console.WriteLine();
            }
            Console.WriteLine();
            Console.WriteLine(" The highest number is {0} and it is at position {1}", maxInt, maxIndex);
            Console.WriteLine(" The lowest number is {0} and it is at position {1}", minInt, minIndex);
        }
    }
}