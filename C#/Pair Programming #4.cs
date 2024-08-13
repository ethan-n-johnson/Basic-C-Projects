namespace Pair_Programming_4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double gpa, grade;
            Console.Write("Enter your GPA: ");
            gpa = Convert.ToDouble(Console.ReadLine());
            Console.Write("Enter your Test Score: ");
            grade = Convert.ToDouble(Console.ReadLine());

            if ((gpa >= 3.0 && grade >= 60) || (gpa <= 3.0 && grade >= 80))
            {
                Console.WriteLine("Accept");
            }
            else
                Console.WriteLine("Reject");
        }
    }
}