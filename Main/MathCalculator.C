#include <stdio.h>
#include <math.h>

void circleFormulas();

int main()
{
    int option;
    printf("Enter the number of the formula you want:\n");
    printf("1 - Circle Formulas\n");
    printf("2 - Triangle Formulas\n");
    printf("3 - Square Formulas\n");
    printf("4 - Rectangle Formulas\n");
    printf("5 - Sphere Formulas\n");
    printf("6 - Cylinder Formulas\n");
    scanf("%d" , &option);

    switch (option)
    {
    case 1:
        circleFormulas();
        break;
    
    default:
        break;
    }

    return 0;
}

void circleFormulas()
{
    double Radius;
    int circleAnswer;

    while (1)
    {
    printf("Choose one of the following circle formulas:\n");
    printf("1 - Circumference (C)\n");
    printf("2 - Area (A)\n");
    scanf("%d" , &circleAnswer);

    if (circleAnswer == 1)
    {
        printf("Insert the Radius of the circle:\n");
        scanf("%lf" , &Radius);
        double circumference = (2 * M_PI * Radius);
        printf("The Circumference of your circle is: %.2lf" , circumference);
        break;
    }
    else if (circleAnswer == 2)
    {
        printf("Insert the Radius of the circle:\n");
        scanf("%lf" , &Radius);
        double area = (M_PI * (Radius * Radius));
        printf("The Area of your circle is: %.2lf" , area);
        break;
    }
    else 
    {
        printf("Invalid number, please choose between 1 and 2...\n");
    }
    }
}