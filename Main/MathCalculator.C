#include <stdio.h>
#include <math.h>

void circleFormulas();
void triangleFormulas();

int main()
{
    int option;
    do
    {
    printf("Enter the number of the formula you want:\n");
    printf("1 - Circle Formulas\n");
    printf("2 - Triangle Formulas\n");
    printf("3 - Square Formulas\n");
    printf("4 - Rectangle Formulas\n");
    printf("5 - Sphere Formulas\n");
    printf("6 - Cylinder Formulas\n");
    printf("7 - Close the program\n");

    if (scanf("%d" , &option) != 1) //if scanf doesnt return 1, it means that it didnt receive a integer number
    {
        while (getchar() != '\n'); //cleans buffer if its not a number
        printf("Insert a valid number\n"); //print this message
        continue; //continue until its a valid number
    }

    switch (option)
    {
    case 1:
        circleFormulas();
        break;

    case 2:
        triangleFormulas();
        break;

    case 3:
        /* code */
        break;

    case 4:
        /* code */
        break;

    case 5:
        /* code */
        break;

    case 6:
        /* code */
        break;
    
    case 7:
        printf("Closing...\n");
        break;

    default:
        printf("Insert a valid number\n");
    }
    } while (option != 7);
    
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

void triangleFormulas()
{
    int triangleAnswer;
    double side_a;
    double side_b;
    double side_c;
    double height;
    printf("Choose one of the following triangle formulas:\n");
    printf("1 - Hypotenuse (using the Pythagorean Theorem)\n");
    printf("2 - Area of a Triangle\n");
    printf("3 - Perimeter of a Triangle\n");
    scanf("%d" , &triangleAnswer);

    while (1)
    {
        if (triangleAnswer == 1)
        {
        printf("Insert the length of side a\n");
        scanf("%lf" , &side_a);
        printf("Insert the length of side b\n");
        scanf("%lf" , &side_b);
        double hypotenuse = sqrt((side_a * side_a) + (side_b * side_b));
        printf("The hypotenuse of your triangle is: %.2lf" , hypotenuse);
        break;
        }
        else if (triangleAnswer == 2)
        {
            printf("Insert the length of side b\n");
            scanf("%lf" , &side_b);
            printf("Insert the height\n");
            scanf("%lf" , &height);
            double area = (side_b * height) / 2;
            printf("The area of your triangle is: %.2lf" , area);
            break;
        }
        else if (triangleAnswer == 3)
        {
            printf("Insert the length of side a\n");
            scanf("%lf" , &side_a);
            printf("Insert the length of side b\n");
            scanf("%lf" , &side_b);
            printf("Insert the length of side c\n");
            scanf("%lf" , &side_c);
            double perimeter = (side_a + side_b + side_c);
            printf("The perimeter of our triangle is: %.2lf" , perimeter);
            break;
        }
        else
        {
            printf("Please insert a valid number\n");
        }
    }
    
}