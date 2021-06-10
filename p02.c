/* 
    2. WAP to find the roots quadratic equation.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float a, b, c, root1, root2;

    printf("Quadratic equation: ax^2 + bx + c = 0\n");
    printf("Enter the values of a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    float discriminant = (b * b) - 4 * a * c;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

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
        printf("Root = %.2f", -b / (2 * a));
    }

    getch();
    return 0;
}
