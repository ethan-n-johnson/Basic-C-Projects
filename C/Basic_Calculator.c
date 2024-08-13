#include <stdio.h> 
#include <math.h>

double Add(double x, double y)
{
    double z = x+y;
    return z;
}
double Subtract(double x, double y)
{
    double z = x-y;
    return z;
}
double Multiply(double x, double y)
{
    double z = x*y;
    return z;
}
double Divide(double x, double y)
{
    double z = x/y;
    return z;
}

int main(void) 
{ 
    double num1 = 0;
    double num2 = 2;
    int modifier = 0;

    printf("Enter a number: ");
    scanf("%lf", &num1);

    printf("Choose a modifier\n(1: Addition)\n(2: Subtraction)\n(3. Multiplication)\n(4. Division)\n(5. Exit)\n");
    scanf("%d", &modifier);
    printf("\n");
    while (modifier < 1 || modifier > 5 )
    {
        printf("Enter a valid value (1-5): ");
        scanf(" %d", &modifier);
    }
    switch (modifier)
        {
        case 1:
            printf("Enter a number to add %lf by ", num1);
            scanf("%lf", &num2);
            printf("\n");
            printf("%lf", Add(num1,num2));
            break;

        case 2:
            printf("Enter a number to subtract %lf by ", num1);
            scanf("%lf", &num2);
            printf("\n");
            printf("%lf", Subtract(num1,num2));
            break;

        case 3:
            printf("Enter a number to multiply %lf by ", num1);
            scanf("%lf", &num2);
            printf("\n");
            printf("%lf", Multiply(num1,num2));
            break;

        case 4:
            printf("Enter a number to divide %lf by ", num1);
            scanf("%lf", &num2);
            printf("\n");
            printf("%lf", Divide(num1,num2));
            break;

        case 5:
            printf("Exiting...");
            break;
        default:
            printf("We should not be here.");
            break;
        }
    return 0;
}