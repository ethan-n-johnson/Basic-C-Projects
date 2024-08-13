namespace Programming_Assignment_2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // This program determines whether or not a triangle can be formed and finds the area of the triangle.

            // Definition of the variables used in this program.
            double a, b, c, s, Area;


            // Assigning user input to the variables a, b, and c
            Console.Write("Enter first line length: ");
            a = Convert.ToDouble(Console.ReadLine());
            Console.Write("Enter second line length: ");
            b = Convert.ToDouble(Console.ReadLine());
            Console.Write("Enter third line length: ");
            c = Convert.ToDouble(Console.ReadLine());

            // Assign "s" with the value of (a+b+c)/2
            s = (a + b + c) / 2;

            // Assign "Area" with the area of the triangle.
            Area = Math.Sqrt((s * (s - a) * (s - b) * (s - c)));

            // Check to see whether or not a triangle can be formed.
            // If a triangle can be formed, print out the area of the triangle.
            // If a triangle cannot be formed, print out "Lines cannot form a triangle."
            if ((a >= b + c) || (b >= a + c) || (c >= a + b))
                Console.WriteLine("Lines cannot form a triangle");
            else
                Console.WriteLine("The area of the triangle is: {0}", Area.ToString("0.00"));



        }
    }

}