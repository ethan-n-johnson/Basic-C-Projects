namespace Pair_Program_5
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int x;
            Console.Write("Enter a Number: ");
            x = Convert.ToInt32(Console.ReadLine());
        while(x > 0)
            {
                Console.Write(x % 10);
                x /= 10;
            }
        }
    }
}