/*
    5. WAP to determine all the roots of a quadratic equation using switch statement.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float a, b, c, discriminant, root1, root2;
    int jump_to;

    printf("Quadratic equation: ax^2 + bx + c = 0\n");
    printf("Enter the values of a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = (b * b) - 4 * a * c;

    if (discriminant == 0)
        jump_to = 1;
    else if (discriminant > 0)
        jump_to = 2;
    else
        jump_to = 3;

    switch (jump_to)
    {
    case 1:
        printf("The quadratic equation has equal roots.\n");
        printf("Root = %.2f", -b / (2 * a));
        break;
    case 2:
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("The quadratic equation has real and distinct roots.\n");
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
        break;
    case 3:
        discriminant = -discriminant;
        printf("The quadratic equation has imaginary roots.\n");
        printf("Root1 = %.2f + %.2f i\n", -b / (2 * a), sqrt(discriminant) / (2 * a));
        printf("Root2 = %.2f - %.2f i", -b / (2 * a), sqrt(discriminant) / (2 * a));
        break;
    default:
        printf("Error!");
        break;
    }

    getch();
    return 0;
}