using Microsoft.VisualBasic;

namespace Pair_Programming_13
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Checking ck = new Checking();
            Savings sv = new Savings();
            Console.WriteLine(ck.Balance + " " + ck.OverdraftAmount);
            Console.WriteLine(sv.Balance + " " + sv.InterestRate);
        }
    }
    class Account
    {
        public int Number { get; set; }
        public string? Owner { get; set; }
        public double Balance { get; set; }
        void MakeDeposit(double amount)
        {
            Balance += amount;
            return;
        }
        void MakeWithdrawal(double amount)
        {
            Balance -= amount;
            return;
        }
    }
    class Checking : Account
    {
        public double OverdraftAmount { get; set; } = 500.00;
    }
    class Savings : Account
    {
        public double InterestRate { get; set; } = 0.05;
        
    }
}
/*
    Write a program that has the following classes:
A base class named Account, with the following members:
Properties:
Number, an integer
Owner, a string
Balance, a double
Two methods of type void, with one parameter named amount, which simply adjust the account Balance by the given amount:
MakeDeposit
MakeWithdrawal

A subclass named Checking, that has an additional Property:
OverdraftAmount, a double - initialize to 500.00

A subclass named Savings, that has an additional Property:
InterestRate, a double - initialize to 0.05
To test your program write code to:
1. Create one object of type Checking and display its balance and overdraft amounts
2. Create one object of type Savings and display its balance and interest rate
Example test method:
class Program
    {
        static void Main(string[] args)
        {
            Checking ck = new Checking();
            Savings sv = new Savings();
            WriteLine(ck.Balance + " " + ck.OverdraftAmount);
            WriteLine(sv.Balance + " " + sv.InterestRate);
        }
    }
Output:
0 500
0 0.05
*/