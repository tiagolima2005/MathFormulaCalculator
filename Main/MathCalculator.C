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
    int option; // Variable to store the user's menu choice

    do // Loop until the user selects the option to close the program
    {
        option = mainMenuRepeat(); // Display the main menu and get the user's choice

        // Execute the code block corresponding to the user's choice
        switch (option)
        {
        case 1:
            circleFormulas(); // Call the function to display circle formulas
            break;

        case 2:
            triangleFormulas(); // Call the function to display triangle formulas
            break;

        case 3:
            squareFormulas(); // Call the function to display square formulas
            break;

        case 4:
            rectangleFormulas(); // Call the function to display rectangle formulas
            break;

        case 5:
            sphereFormulas(); // Call the function to display sphere formulas
            break;

        case 6:
            cylinderFormulas(); // Call the function to display cylinder formulas
            break;
        
        case 7:
            printf("Closing...\n"); // Notify the user that the program is closing
            break;

        default:
            printf("Insert a valid number\n"); // Inform the user to select a valid option if an invalid input is provided
        }
    } while (option != 7); // Continue looping until the user selects option 7 to close
    
    return 0; // Return 0 to indicate successful completion
}

void circleFormulas()
{
    double Radius; // store the radius of the circle
    int circleAnswer; // store the user's choice

    while (1) // Loop continuously until the user chooses to return to the main menu
    {
        // Prompt the user to select a circle formula
        printf("Choose one of the following circle formulas:\n");
        printf("1 - Circumference (C)\n");
        printf("2 - Area (A)\n");
        printf("3 - Return to main menu\n");

        circleAnswer = IntegerInputAutomation(); // Get the user's choice

        if (circleAnswer == 1) // If the user chooses option 1 (Circumference)
        {
            printf("Insert the Radius of the circle:\n");
            Radius = DoubleInputAutomation(); // Get the radius of the circle
            
            // Calculate the circumference using the formula C = 2 * π * Radius
            double circumference = (2 * M_PI * Radius);
            printf("\nThe Circumference of your circle is: %.2lf\n" , circumference); // Display result
            break; // Exit loop
        }
        else if (circleAnswer == 2) // If the user chooses option 2 (Area)
        {
            printf("Insert the Radius of the circle:\n");
            Radius = DoubleInputAutomation(); // Get the radius of the circle
            
            // Calculate the area using the formula A = π * Radius^2
            double area = (M_PI * (Radius * Radius));
            printf("\nThe Area of your circle is: %.2lf\n" , area); // Display result
            break; // Exit loop
        }
        else if (circleAnswer == 3) // If the user chooses option 3 (Return to main menu)
        {
            printf("Returning to main menu...\n"); // Inform the user
            break; // Exit loop
        }
        else // If the user enters an invalid option
        {
            printf("Invalid number, please choose 1, 2 or 3...\n"); // Prompt for a valid input
        }
    }
}

void triangleFormulas()
{
    int triangleAnswer; // store the user's choice
    double side_a; // store length of side a
    double side_b; // tore length of side b
    double side_c; // store length of side c
    double height; // store the height of the triangle

    while (1) // Loop continuously until the user chooses to return to the main menu
    {
        // Prompt the user to select a triangle formula
        printf("Choose one of the following triangle formulas:\n");
        printf("1 - Hypotenuse (using the Pythagorean Theorem)\n");
        printf("2 - Area of a Triangle\n");
        printf("3 - Perimeter of a Triangle\n");
        printf("4 - Return to main menu...\n");

        triangleAnswer = IntegerInputAutomation(); // Get the user's choice

        if (triangleAnswer == 1) // If the user chooses option 1 (Hypotenuse)
        {
            printf("Insert the length of side a\n");
            side_a = DoubleInputAutomation(); // Get the length of side a
            printf("Insert the length of side b\n");
            side_b = DoubleInputAutomation(); // Get the length of side b
            
            // Calculate the hypotenuse using the Pythagorean theorem
            double hypotenuse = sqrt((side_a * side_a) + (side_b * side_b));
            printf("\nThe hypotenuse of your triangle is: %.2lf\n" , hypotenuse); // Display result
            break; // Exit loop
        }
        else if (triangleAnswer == 2) // If the user chooses option 2 (Area)
        {
            printf("Insert the length of side b\n");
            side_b = DoubleInputAutomation(); // Get the length of side b
            printf("Insert the height\n");
            height = DoubleInputAutomation(); // Get the height of the triangle
            
            // Calculate the area of the triangle
            double area = (side_b * height) / 2;
            printf("\nThe area of your triangle is: %.2lf\n" , area); // Display result
            break; // Exit loop
        }
        else if (triangleAnswer == 3) // If the user chooses option 3 (Perimeter)
        {
            printf("Insert the length of side a\n");
            side_a = DoubleInputAutomation(); // Get the length of side a
            printf("Insert the length of side b\n");
            side_b = DoubleInputAutomation(); // Get the length of side b
            printf("Insert the length of side c\n");
            side_c = DoubleInputAutomation(); // Get the length of side c
            
            // Calculate the perimeter of the triangle
            double perimeter = (side_a + side_b + side_c);
            printf("\nThe perimeter of our triangle is: %.2lf\n" , perimeter); // Display result
            break; // Exit loop
        }
        else if (triangleAnswer == 4) // If the user chooses option 4 (Return to main menu)
        {
            printf("Returning to main menu\n"); // Inform the user
            break; // Exit loop
        }
        else // If the user enters an invalid option
        {
            printf("Invalid number, please choose 1, 2, 3 or 4...\n"); // Prompt for a valid input
        }
    }
}

void squareFormulas()
{
    while (1) // Loop continuously until the user chooses to return to the main menu
    {
        int squareAnswer; // store the user's choice
        double side_length; // store the length of a side of the square
        
        // Prompt the user to select a square formula
        printf("Choose one of the following square formulas:\n");
        printf("1 - Area of a square\n");
        printf("2 - Perimeter of a square\n");
        printf("3 - Diagonal of a square\n");
        printf("4 - Return to main menu\n");

        squareAnswer = IntegerInputAutomation(); // Get the user's input for their choice

        if (squareAnswer == 1) // If the user chooses option 1
        {
            printf("Insert the side length:\n");
            side_length = DoubleInputAutomation(); // Get the side length of the square
            double area = (side_length * side_length); // Calculate the area of the square
            printf("The area of your square is: %.2lf\n" , area); // Display the result
            break; // Exit loop
        }
        else if (squareAnswer == 2) // If the user chooses option 2
        {
            printf("Insert the side length:\n");
            side_length = DoubleInputAutomation(); // Get the side length of the square
            double perimeter = (4 * side_length); // Calculate the perimeter of the square
            printf("The perimeter of your square is: %.2lf\n" , perimeter); // Display the result
            break; // Exit loop
        }
        else if (squareAnswer == 3) // If the user chooses option 3
        {
            printf("Insert the side length:\n");
            side_length = DoubleInputAutomation(); // Get the side length of the square
            double diagonal = (side_length * sqrt(2)); // Calculate the diagonal of the square
            printf("The diagonal of your square is: %.2lf\n" , diagonal); // Display the result
            break; // Exit loop
        }
        else if (squareAnswer == 4) // If the user chooses option 4
        {
            printf("Returning to main menu...\n"); // Inform the user
            break; // Exit loop
        }
        else // If the user inserts an invalid option
        {
            printf("Invalid number, please choose 1, 2, 3 or 4...\n"); // Prompt for valid input
        }
    }
}

void rectangleFormulas()
{
    while (1) // Loop continuously until the user chooses to return to the main menu
    {
        int rectangleAnswer; // store the user's choice
        double length; // store the length of the rectangle
        double width; // store the width of the rectangle
        
        // Prompt the user to select a rectangle formula
        printf("Choose one of the following rectangle formulas:\n");
        printf("1 - Area of a rectangle\n");
        printf("2 - Perimeter of a rectangle\n");
        printf("3 - Diagonal of a rectangle\n");
        printf("4 - Return to main menu\n");
        
        rectangleAnswer = IntegerInputAutomation(); // Get the user's input for their choice

        if (rectangleAnswer == 1) // If the user chooses option 1
        {
            printf("Insert the length:\n");
            length = DoubleInputAutomation(); // Get the length of the rectangle
            printf("Insert the width:\n");
            width = DoubleInputAutomation(); // Get the width of the rectangle
            double area = (length * width); // Calculate the area
            printf("The area of your rectangle is: %.2lf\n" , area); // Display the result
            break; // Exit loop
        }
        else if (rectangleAnswer == 2) // If the user chooses option 2
        {
            printf("Insert the length:\n");
            length = DoubleInputAutomation(); // Get the length of the rectangle
            printf("Insert the width:\n");
            width = DoubleInputAutomation(); // Get the width of the rectangle
            double perimeter = (2 * (length + width)); // Calculate the perimeter
            printf("The perimeter of your rectangle is: %.2lf\n" , perimeter); // Display the result
            break; // Exit loop
        }
        else if (rectangleAnswer == 3) // If the user chooses option 3
        {
            printf("Insert the length:\n");
            length = DoubleInputAutomation(); // Get the length of the rectangle
            printf("Insert the width:\n");
            width = DoubleInputAutomation(); // Get the width of the rectangle
            double diagonal = sqrt((length * length) + (width * width)); // Calculate the diagonal
            printf("The diagonal of your rectangle is: %.2lf\n" , diagonal); // Display the result
            break; // Exit loop
        }
        else if (rectangleAnswer == 4) // If the user chooses option 4
        {
            printf("Returning to main menu...\n"); // Inform the user
            break; // Exit loop
        }
        else // If the user inserts an invalid option
        {
            printf("Invalid number, please choose 1, 2, 3 or 4...\n"); // Prompt for valid input
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
        printf("The surface area of your sphere is: %.2lf\n" , surface); // display the result
        break; // exit loop
    }
    else if (sphereAnswer == 2) // if the user chooses option 2
    {
        printf("Insert the radius:\n");
        radius = DoubleInputAutomation(); // get the radius of the sphere
        double volume = ((4.0 / 3.0) * M_PI * (radius * radius * radius)); // calculate the volume
        printf("The volume of your sphere is: %.2lf\n" , volume); // display the result
        break; // exit loop
    }
    else if (sphereAnswer == 3) // if the user chooses option 3
    {
        printf("Insert the radius:\n");
        radius = DoubleInputAutomation(); // get the radius of the sphere
        double circumference = (2 * M_PI * radius); // calculate the circumference
        printf("The circumference of your sphere is: %.2lf\n" , circumference); // display the result
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
    int cylinderAnswer; // tore the user's choice
    double radius; //  the radius value
    double height; // the height value

    while (1) // infinite loop until the user chooses to exit
    {
        printf("Choose one of the following cylinder formulas:\n");
        printf("1 - Lateral Surface Area of a Cylinder\n");
        printf("2 - Total Surface Area of a Cylinder\n");
        printf("3 - Volume of a Cylinder\n");
        printf("4 - Base Area of a Cylinder\n");
        printf("5 - Return to main menu\n");

        cylinderAnswer = IntegerInputAutomation(); // get the user's input for their choice

        if (cylinderAnswer == 1) // if the user chooses option 1
        {
            printf("Insert the radius:\n");
            radius = DoubleInputAutomation(); // get the radius of the cylinder
            printf("Insert the height:\n");
            height = DoubleInputAutomation(); // get the height of the cylinder
            double LATsurfaceArea = (2 * M_PI * radius * height); // calculate the Lateral Surface Area
            printf("The Lateral Surface Area of your cylinder is: %.2lf\n" , LATsurfaceArea); // display the result
            break; // exit loop
        }

        else if (cylinderAnswer == 2) // if the user chooses option 2
        {
            printf("Insert the radius:\n");
            radius = DoubleInputAutomation(); // get the radius of the cylinder
            printf("Insert the height:\n");
            height = DoubleInputAutomation(); // get the height of the cylinder
            double TOTALsurfaceArea = (2 * M_PI * radius * (radius + height)); // calculate the Total Surface Area
            printf("The Total Surface Area of your cylinder is: %.2lf\n" , TOTALsurfaceArea); // display the result
            break; // exit loop
        }

        else if (cylinderAnswer == 3) // if the user chooses option 3
        {
            printf("Insert the radius:\n");
            radius = DoubleInputAutomation(); // get the radius of the cylinder
            printf("Insert the height:\n");
            height = DoubleInputAutomation(); // get the height of the cylinder
            double volume = (M_PI * (radius * radius) * height); // calculate the volume
            printf("The Volume of your cylinder is: %.2lf\n" , volume); // display the result
            break; // exit loop
        }

        else if (cylinderAnswer == 4) // if the user chooses option 4
        {
            printf("Insert the radius:\n");
            radius = DoubleInputAutomation(); // get the radius of the cylinder
            double BaseArea = (M_PI * (radius * radius)); // calculate the Base Area
            printf("The Base Area of your cylinder is: %.2lf\n" , BaseArea); // display the result
            break; // exit loop
        }

        else if (cylinderAnswer == 5) // if the user chooses option 5
        {
            printf("Returning to main menu...\n"); // Inform the user
            break; // exit loop
        }

        else // if the user inserts an invalid option
        {
            printf("Invalid number, please choose 1, 2, 3, 4 or 5...\n"); // prompt for valid input
        }
    }
}