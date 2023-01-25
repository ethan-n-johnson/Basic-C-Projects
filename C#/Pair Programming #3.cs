namespace Pair_Programming_3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            
            string name;
            int age;
            char gender;
            double height;

            Console.WriteLine("Subject's data:");
            Console.WriteLine("===============");
            Console.Write("Name: ");
            name = Console.ReadLine();
            Console.Write("Age: ");
            age = Convert.ToInt32(Console.ReadLine());
            Console.Write("Gender: ");
            gender = Convert.ToChar(Console.ReadLine());
            Console.Write("Height: ");
            height = Convert.ToDouble(Console.ReadLine());
            Console.Write(" meters");
        }
    }
}