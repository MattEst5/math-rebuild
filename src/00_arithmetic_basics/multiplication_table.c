#include <stdio.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int main(void)
{
    long long a, b, prod;

    printf("Enter the first number: ");
    if (scanf("%lld", &a) != 1) {
        fprintf(stderr, "Error: Numbers only, please");
        return EXIT_FAILURE;
    }

    printf("Enter the second number: ");
    if (scanf("%lld", &b) != 1) {
        fprintf(stderr, "Error: Numbers only, please");
        return EXIT_FAILURE;
    }

    prod = a * b; 

    printf("\n%lld * %lld = %lld\n\n", a, b, prod);
    return EXIT_SUCCESS;
}