using System.Security.Principal;
using System.Xml.Linq;

// This Program gets the balanced of an account and calculates the monthly interest of the account.
namespace Programming_Assignment_5
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Account account = new Account();
            account.Id = 1122;
            account.Balance = 20000;
            account.AnnualInterestRate = 4.5;
            account.DateCreated = DateTime.Now;
            double monthlyInterestRate;
            double monthlyInterest;

            account.Balance = Withdraw(account.Balance, 2500);
            account.Balance = Deposit(account.Balance, 3000);
            monthlyInterestRate = GetMonthlyInterestRate(account.AnnualInterestRate);
            monthlyInterest = GetMonthlyInterest(monthlyInterestRate, account.Balance);

            Console.WriteLine("Balance is {0:C}", account.Balance);
            Console.WriteLine("Monthly interest is {0:C}", monthlyInterest);
            Console.WriteLine("This account was created {0}", account.DateCreated);
        }
        static double GetMonthlyInterestRate(double annualInterestRate)
        {
            double monthlyInterestRate = (annualInterestRate / 100) / 12;

            return monthlyInterestRate;
        }
        static double GetMonthlyInterest(double monthlyInterestRate, double balance)
        {
            double monthlyInterest = monthlyInterestRate * balance;

            return monthlyInterest;
        }
        static double Withdraw(double balance, double amount)
        {
            double newBalance = balance - amount;

            return newBalance;
        }
        static double Deposit(double balance, double amount)
        {
            double newBalance = balance + amount;

            return newBalance;
        }
    }
    class Account
    {
        private int id = 0;
        private double balance = 0;
        private double annualInterestRate = 0;
        private DateTime dateCreated;
        public int Id
        {
            get { return id; }
            set { id = value; }
        }
        public double Balance
        {
            get { return balance; }
            set { balance = value; }
        }
        public double AnnualInterestRate
        {
            get { return annualInterestRate; }
            set { annualInterestRate = value; }
        }
        public DateTime DateCreated
        {
            get { return dateCreated; }
            set { dateCreated = value; }
        }
    }
}