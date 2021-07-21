/* 
    Practice
    2.  Write a program to find the roots of a quadratic equation.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float a, b, c, root; // root variable is for equations having single root

    printf("Quadratic equation: ax^2 + bx + c = 0\n");
    printf("Enter the values of a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0 && b == 0 && c == 0)
        printf("The equation has infinte solutions.");
    else if (a == 0 && b == 0)
        printf("The equation has no solution.");
    else if (a == 0)
    {
        printf("The equation is not quadratic.\n");
        root = -c / b;
        printf("Root = %.2f", (root == -0.0f) ? 0 : root);
    }
    else
    {
        float discriminant = (b * b) - 4 * a * c;

        if (discriminant > 0)
        {
            float root1 = (-b + sqrt(discriminant)) / (2 * a);
            float root2 = (-b - sqrt(discriminant)) / (2 * a);

            printf("The quadratic equation has real roots.\n");
            printf("Root1 = %.2f\n", root1);
            printf("Root2 = %.2f", root2);
        }
        else if (discriminant < 0)
        {
            float first_part = -b / (2 * a);
            float second_part = sqrt(abs(discriminant)) / (2 * a);

            printf("The quadratic equation has imaginary roots.\n");
            printf("Root1 = %.2f + %.2f i\n", first_part, second_part);
            printf("Root2 = %.2f - %.2f i", first_part, second_part);
        }
        else
        {
            printf("The quadratic equation has equal roots.\n");
            root = -b / (2 * a);
            printf("Root = %.2f", root);
        }
    }

    getch();
    return 0;
}
