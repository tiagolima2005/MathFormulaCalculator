#include <stdio.h>
#include <math.h>

void circleFormulas();
void triangleFormulas();
void squareFormulas();
void rectangleFormulas();
void sphereFormulas();
void cylinderFormulas();
int IntegerInputAutomation();
double DoubleInputAutomation();
int mainMenuRepeat();

int mainMenuRepeat()
{
    int input;
    while (1)
    {
        printf("\nWelcome to the Math Formulas Calculator\n");
        printf("Enter the number of the formula you want:\n");
        printf("1 - Circle Formulas\n");
        printf("2 - Triangle Formulas\n");
        printf("3 - Square Formulas\n");
        printf("4 - Rectangle Formulas\n");
        printf("5 - Sphere Formulas\n");
        printf("6 - Cylinder Formulas\n");
        printf("7 - Close the program\n");
        if (scanf("%d" , &input) != 1)
        {
            while (getchar() != '\n');
            printf("\nInsert a valid number\n");
        }
        else
        {
            return input;
        }
    }
}


int IntegerInputAutomation()
{
    int input;
    while (1)
    {
        if (scanf("%d" , &input) != 1)
        {
            while (getchar() != '\n');
            printf("\nInsert a valid number...\n");
        }
        else
        {
            return input;
        }
    }
}

double DoubleInputAutomation()
{
    double input;
    while (1)
        {
        if (scanf("%lf" , &input) != 1)
        {
            while (getchar() != '\n');
            printf("\nInsert a valid number\n");
        }
        else
        {
            return input;
        }
        }
}

int main()
{
    int option;
    do
    {
    option = mainMenuRepeat();

    switch (option)
    {
    case 1:
        circleFormulas();
        break;

    case 2:
        triangleFormulas();
        break;

    case 3:
        squareFormulas();
        break;

    case 4:
        rectangleFormulas();
        break;

    case 5:
        sphereFormulas();
        break;

    case 6:
        cylinderFormulas();
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
    printf("3 - Return to main menu\n");

    circleAnswer = IntegerInputAutomation();

    if (circleAnswer == 1)
    {
        printf("Insert the Radius of the circle:\n");
        Radius = DoubleInputAutomation();
        double circumference = (2 * M_PI * Radius);
        printf("\nThe Circumference of your circle is: %.2lf\n" , circumference);
        break;
    }
    else if (circleAnswer == 2)
    {
        printf("Insert the Radius of the circle:\n");
        Radius = DoubleInputAutomation();
        double area = (M_PI * (Radius * Radius));
        printf("\nThe Area of your circle is: %.2lf\n" , area);
        break;
    }
    else if (circleAnswer == 3)
    {
        printf("Returning to main menu...\n");
        break;
    }
    else 
    {
        printf("Invalid number, please choose 1, 2 or 3...\n");
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

    while (1) 
    {
    printf("Choose one of the following triangle formulas:\n");
    printf("1 - Hypotenuse (using the Pythagorean Theorem)\n");
    printf("2 - Area of a Triangle\n");
    printf("3 - Perimeter of a Triangle\n");
    printf("4 - Return to main menu...\n");

    triangleAnswer = IntegerInputAutomation();

        if (triangleAnswer == 1)
        {
            printf("Insert the length of side a\n");
            side_a = DoubleInputAutomation();
            printf("Insert the length of side b\n");
            side_b = DoubleInputAutomation();
            double hypotenuse = sqrt((side_a * side_a) + (side_b * side_b));
            printf("\nThe hypotenuse of your triangle is: %.2lf\n" , hypotenuse);
            break;
        }

        else if (triangleAnswer == 2)
        {
            printf("Insert the length of side b\n");
            side_b = DoubleInputAutomation();
            printf("Insert the height\n");
            height = DoubleInputAutomation();
            double area = (side_b * height) / 2;
            printf("\nThe area of your triangle is: %.2lf\n" , area);
            break;
        }

        else if (triangleAnswer == 3)
        {
            printf("Insert the length of side a\n");
            side_a = DoubleInputAutomation();
            printf("Insert the length of side b\n");
            side_b = DoubleInputAutomation();
            printf("Insert the length of side c\n");
            side_c = DoubleInputAutomation();
            double perimeter = (side_a + side_b + side_c);
            printf("\nThe perimeter of our triangle is: %.2lf\n" , perimeter);
            break;
        }
        else if (triangleAnswer == 4)
        {
            printf("Returning to main menu\n");
            break;
        }
        else
        {
            printf("Invalid number, please choose 1, 2, 3 or 4...\n");
        }
    }
}

void squareFormulas()
{
    while (1)
    {
        int squareAnswer;
        double side_length;
        printf("Choose one of the following square formulas:\n");
        printf("1 - Area of a square\n");
        printf("2 - Perimeter of a square\n");
        printf("3 - Diagonal of a square\n");
        printf("4 - Return to main menu\n");

        squareAnswer = IntegerInputAutomation();

        if (squareAnswer == 1)
        {
            printf("Insert the side length:\n");
            side_length = DoubleInputAutomation();
            double area = (side_length * side_length);
            printf("The area of your square is: %lf\n" , area);
            break;
        }
        else if (squareAnswer == 2)
        {
            printf("Insert the side length:\n");
            side_length = DoubleInputAutomation();
            double perimeter = (4 * side_length);
            printf("The perimeter of your square is: %lf\n" , perimeter);
            break;
        }
        else if (squareAnswer == 3)
        {
            printf("Insert the side length:\n");
            side_length = DoubleInputAutomation();
            double diagonal = (side_length * sqrt(2));
            printf("The diagonal of your square is: %lf\n" , diagonal);
            break;
        }
        else if (squareAnswer == 4)
        {
            printf("Returning to main menu...\n");
            break;
        }
        else
        {
            printf("Invalid number, please choose 1, 2, 3 or 4...\n");
        }
    }
}

void rectangleFormulas()
{
    while (1)
    {
        int rectangleAnswer;
        double length;
        double width;
        printf("Choose one of the following rectangle formulas:\n");
        printf("1 - Area of a rectangle\n");
        printf("2 - Perimeter of a rectangle\n");
        printf("3 - Diagonal of a rectangle\n");
        printf("4 - Return to main menu\n");
        rectangleAnswer = IntegerInputAutomation();

        if (rectangleAnswer == 1)
        {
            printf("Insert the length:\n");
            length = DoubleInputAutomation();
            printf("Insert the width:\n");
            width = DoubleInputAutomation();
            double area = (length * width);
            printf("The area of your rectangle is: %lf\n" , area);
            break;
        }
        else if (rectangleAnswer == 2)
        {
            printf("Insert the length:\n");
            length = DoubleInputAutomation();
            printf("Insert the width:\n");
            width = DoubleInputAutomation();
            double perimeter = (2 * (length + width));
            printf("The perimeter of your rectangle is: %lf\n" , perimeter);
            break;
        }
        else if (rectangleAnswer == 3)
        {
            printf("Insert the length:\n");
            length = DoubleInputAutomation();
            printf("Insert the width:\n");
            width = DoubleInputAutomation();
            double diagonal = sqrt((length * length) + (width * width));
            printf("The diagonal of your rectangle is: %lf\n" , diagonal);
            break;
        }
        else if (rectangleAnswer == 4)
        {
            printf("Returning to main menu...\n");
            break;
        }
        else
        {
            printf("Invalid number, please choose 1, 2, 3 or 4...\n");
        }
    }
}

void sphereFormulas()
{
    int sphereAnswer; // store the user's choice
    double radius; // store the radius value

    while (1) // infinite loop until the user chooses to exit
    {
    printf("Choose one of the following sphere formulas:\n");
    printf("1 - Surface Area of a sphere\n");
    printf("2 - Volume of a sphere\n");
    printf("3 - Circumference of a sphere\n");
    printf("4 - Return to main menu\n");
    
    sphereAnswer = IntegerInputAutomation(); // get the user's input for their choice

    if (sphereAnswer == 1) // if the user chooses option 1
    {
        printf("Insert the radius:\n");
        radius = DoubleInputAutomation(); // get the radius of the sphere
        double surface = (4 * M_PI * (radius * radius)); // calculate the surface area
        printf("The surface area of your sphere is: %lf\n" , surface); // display the result
        break; // exit loop
    }
    else if (sphereAnswer == 2) // if the user chooses option 2
    {
        printf("Insert the radius:\n");
        radius = DoubleInputAutomation(); // get the radius of the sphere
        double volume = ((4.0 / 3.0) * M_PI * (radius * radius * radius)); // calculate the volume
        printf("The volume of your sphere is: %lf\n" , volume); // display the result
        break; // exit loop
    }
    else if (sphereAnswer == 3) // if the user chooses option 3
    {
        printf("Insert the radius:\n");
        radius = DoubleInputAutomation(); // get the radius of the sphere
        double circumference = (2 * M_PI * radius); // calculate the circumference
        printf("The circumference of your sphere is: %lf\n" , circumference); // display the result
        break; // exit loop
    }
    else if (sphereAnswer == 4) // if the user chooses option 4
    {
        printf("Returning to main menu...\n"); //Inform the user
        break; // exit loop
    }
    else // if the user inserts an invalid option
    {
        printf("Invalid number, please choose 1, 2, 3 or 4...\n"); // prompt for valid input
    }
    }
}

void cylinderFormulas()
{
    int cylinderAnswer;
    double radius;
    double height;
    while (1)
    {
        printf("Choose one of the following cylinder formulas:\n");
        printf("1 - Lateral Surface Area of a Cylinder\n");
        printf("2 - Total Surface Area of a Cylinder\n");
        printf("3 - Volume of a Cylinder\n");
        printf("4 - Base Area of a Cylinder\n");
        printf("5 - Return to main menu\n");
        cylinderAnswer = IntegerInputAutomation();

        if (cylinderAnswer == 1)
        {
            printf("Insert the radius:\n");
            radius = DoubleInputAutomation();
            printf("Insert the height:\n");
            height = DoubleInputAutomation();
            double LATsurfaceArea = (2 * M_PI * radius * height);
            printf("The Lateral Surface Area of your cylinder is: %lf\n" , LATsurfaceArea);
            break;
        }

        else if (cylinderAnswer == 2)
        {
            printf("Insert the radius:\n");
            radius = DoubleInputAutomation();
            printf("Insert the height:\n");
            height = DoubleInputAutomation();
            double TOTALsurfaceArea = (2 * M_PI * radius * (radius + height));
            printf("The Total Surface Area of your cylinder is: %lf\n" , TOTALsurfaceArea);
            break;
        }

        else if (cylinderAnswer == 3)
        {
            printf("Insert the radius:\n");
            radius = DoubleInputAutomation();
            printf("Insert the height:\n");
            height = DoubleInputAutomation();
            double volume = (M_PI * (radius * radius) * height);
            printf("The Volume of your cylinder is: %lf\n" , volume);
            break;
        }

        else if (cylinderAnswer == 4)
        {
            printf("Insert the radius:\n");
            radius = DoubleInputAutomation();
            double BaseArea = (M_PI * (radius * radius));
            printf("The Base Area of your cylinder is: %lf\n" , BaseArea);
            break;
        }

        else if (cylinderAnswer == 5)
        {
            printf("Returning to main menu...\n");
            break;
        }

        else
        {
            printf("Invalid number, please choose 1, 2, 3, 4 or 5...\n");
        }
    }
}