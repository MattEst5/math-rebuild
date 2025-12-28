#include <stdio.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int main(void)
{
    int a, b, c, d;

    printf("\nComparing Fractions\n\n");

    printf("Enter first numerator: ");
    if (scanf("%d", &a) != 1) {
        printf("Numbers only, please.\n");
        return EXIT_FAILURE;
    }

    printf("Enter first denominator: ");
    if (scanf("%d", &b) != 1) {
        printf("Numbers only, please.\n");
        return EXIT_FAILURE;
    }

    printf("Enter second numerator: ");
    if (scanf("%d", &c) != 1) {
        printf("Numbers only, please.\n");
        return EXIT_FAILURE;
    }

    printf("Enter second denominator: ");
    if (scanf("%d", &d) != 1) {
        printf("Numbers only, please.\n");
        return EXIT_FAILURE;
    }

    int left = a * d;
    int right = b * c;

    printf("Comparing fractions: %d/%d - %d/%d\n\n", a, b, c, d);

    if (left > right) {
        printf("%d/%d > %d/%d\n\n", a, b, c, d);
    }
    else if (left < right) {
        printf("%d/%d < %d/%d\n\n", a, b, c, d);
    }
    else {
        printf("%d/%d = %d/%d\n\n", a, b, c, d);
    }
    return EXIT_SUCCESS;
}