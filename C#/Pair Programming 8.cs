using System.Diagnostics.CodeAnalysis;
using System.Windows.Markup;

namespace Pair_Program_8
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] array = new int[10];
            int count;
            count = fillArray(array);
            Console.WriteLine("There were {0} test scores entered.", count);


            double average = getAverage(array, count);
            Console.WriteLine("The average is {0}.", average);
        }
        static int fillArray(int[] array)
        {
            int count = 0;
            for (; count < array.Length; count++)
            {
                int testScore;
                Console.Write("Enter a test score (-1 to end): ");
                testScore = Convert.ToInt32(Console.ReadLine());
                if(testScore < 0)
                {
                    break;
                }
                array[count] = testScore;
            }
            return count; 
        }
        static double getAverage(int[] array, int count)
        {
            double average = 0;
            double sum = 0;
            for(int i = 0; i < array.Length; i++)
            {
                sum = sum + array[i];
            }
            average = sum / count;
            return average;
        }
    }
}