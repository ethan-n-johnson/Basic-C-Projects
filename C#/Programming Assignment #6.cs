using System;
using System.IO;
using System.Reflection.Emit;
using System.Reflection.Metadata.Ecma335;

namespace Programming_Assignment_6
{
    internal class Program
    {
        // Display the names of the students, show their test grades, overall grade, and their overall grade in letter form.
        // This is done using the data from the scores.csv file.
        static void Main(string[] args)
        {
            const char COMMA = ',';
            const string fileName = "C:\\Users\\ethan\\OneDrive\\Documents\\Visual Studio Programs\\School\\CSE 1310\\temp\\scores.csv";
            string getLine;
            string[] lines;
            char grade = '.';
            double average = 0;

            Student Student = new Student();

            if (File.Exists(fileName))
            {
                FileStream fs = new FileStream(fileName, FileMode.Open, FileAccess.Read);
                StreamReader sr = new StreamReader(fs);
                getLine = sr.ReadLine();
                Console.WriteLine("{0} {1,30} {2,10} {3,7}", "Student Name", " Test Scores   ", "Average", "Grade");
                Console.WriteLine("{0} {1,30} {2,10} {3,7}", "============", "==================", "=======", "=====");
                while (getLine != null)
                {
                    string test;
                    lines = getLine.Split(COMMA);
                    Student.Name = lines[0];
                    Student.Score1 = Convert.ToDouble(lines[1]);
                    Student.Score2 = Convert.ToDouble(lines[2]);
                    Student.Score3 = Convert.ToDouble(lines[3]);
                    Student.Score4 = Convert.ToDouble(lines[4]);
                    Student.Score5 = Convert.ToDouble(lines[5]);
                    average = getAverage(Student.Score1, Student.Score2, Student.Score3, Student.Score4, Student.Score5);
                    grade = getGrade(Student.Score1, Student.Score2, Student.Score3, Student.Score4, Student.Score5);

                    Console.WriteLine("{0,-23} {1, 3} {2,3} {3,3} {4,3} {5,3}      {6:0.0} {7,6}", Student.Name, Student.Score1, 
                        Student.Score2, Student.Score3, Student.Score4, Student.Score5, average, grade);
                    getLine = sr.ReadLine();
                }
                sr.Close();
                fs.Close();
            }
            else
            {
                Console.WriteLine("Input file\"scores.csv\" not found");
            }
        }
        static double getAverage(double score1, double score2, double score3, double score4, double score5)
        {
            double scoreAverage;
            scoreAverage = (score1 + score2 + score3 + score4 + score5) / 5.00;
            return scoreAverage;
        }
        static char getGrade(double score1, double score2, double score3, double score4, double score5)
        {
            char gradeChar = '\0';
            double scoreAverage;
            scoreAverage = (score1 + score2 + score3 + score4 + score5) / 5;
            if (scoreAverage < 100 && scoreAverage >= 90)
            {
                gradeChar = 'A';
            }
            else if (scoreAverage < 90 && scoreAverage >= 80)
            {
                gradeChar = 'B';
            }
            else if (scoreAverage < 80 && scoreAverage >= 70)
            {
                gradeChar = 'C';
            }
            else if (scoreAverage < 70 && scoreAverage >= 60)
            {
                gradeChar = 'D';
            }
            else if (scoreAverage < 60 && scoreAverage >= 50)
            {
                gradeChar = 'F';
            }
            return gradeChar;
        }
    }
    class Student
    {
        public string? Name { get; set; }
        public double Score1 { get; set; }
        public double Score2 { get; set; }
        public double Score3 { get; set; }
        public double Score4 { get; set; }
        public double Score5 { get; set; }
    }
}