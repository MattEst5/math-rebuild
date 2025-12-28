#include <stdio.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int main(void)
{
    printf("Mixed Fractions\n");

    int num, den, whole, remainder;

    printf("\nEnter numerator: ");
    if (scanf("%d", &num) != 1) {   
        printf("Numbers only, please!\n");
        return EXIT_FAILURE;
    }

    printf("Enter denominator: ");
    if (scanf("%d", &den) != 1) {
        printf("Numbers only, please!\n");
        return EXIT_FAILURE;
    }
    else if (den == 0){
        printf("\nDenominator cannot be 0.\n");
        return EXIT_FAILURE;
    }

    whole = num / den;
    remainder = num % den;

    if (remainder == 0) {
        printf("\n%d/%d = %d\n\n", num, den, whole);
    }
    else {
        printf("\n%d/%d = %d %d/%d\n\n", num, den, whole, remainder, den);
    }
    return EXIT_SUCCESS;
}