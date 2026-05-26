#include <stdio.h>
#include <math.h> // Required for the sqrt() function

int main() {
    double number, square, squareRoot;

    // Get input from user
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Calculate Square (number multiplied by itself)
    square = number * number;

    // Calculate Square Root using sqrt() function
    if (number < 0) {
        printf("Square root of a negative number is not a real number.\n");
    } else {
        squareRoot = sqrt(number);
        printf("Square: %.2lf\n", square);
        printf("Square root: %.2lf\n", squareRoot);
    }

    return 0;
}