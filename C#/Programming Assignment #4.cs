namespace Programming_Assignment_4
{
    internal class Program
    {
        // The program calculates the total meal price including tip.
        static void Main(string[] args)
        {
            string value;
            double mealPrice;
            int intTip;
            double doubleTip;
            bool success;

            Console.Write("Enter meal price: ");
            value = Console.ReadLine();
            success = double.TryParse(value, out mealPrice);
            if (success)
            {
                Console.Write("Enter tip as percent (integer) or dollar amount (double): ");
                value = Console.ReadLine();
                success = int.TryParse(value, out intTip);
                if (success)
                {
                    DisplayTipInfo(mealPrice, intTip);
                }
                else
                {
                    success = double.TryParse(value, out doubleTip);
                    if (success)
                    {
                        DisplayTipInfo(mealPrice, doubleTip);
                    }
                    else
                        Console.WriteLine("Invalid entry - integer or double expected");
                }
            }
            else
            {
                Console.WriteLine("Invalid entry - double expected");
            }
        }
        public static void DisplayTipInfo(double mealPrice, int tip)
        {
            double totalBill;
            double tipInDollars = (tip / 100.00) * mealPrice;
            totalBill = mealPrice + tipInDollars;
            Console.WriteLine("Meal price: {0:C}, Tip Precent: {1:0.00}%", mealPrice, tip);
            Console.WriteLine("Tip in dollars: {0:C}, Total bill: {1:C}", tipInDollars, totalBill);
        }
        public static void DisplayTipInfo(double mealPrice, double tip)
        {
            double totalBill;
            double tipInPercentage = (tip / mealPrice) * 100;
            totalBill = mealPrice + tip;
            Console.WriteLine("Meal price: {0:C}, Tip Precent: {1:0.00}", mealPrice, tipInPercentage);
            Console.WriteLine("Tip in dollars: {0:C}, Total bill: {1:C}", tip, totalBill);
        }
    }
}