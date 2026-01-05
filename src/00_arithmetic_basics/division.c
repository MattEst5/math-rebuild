#include <stdio.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int main(void)
{
    long long x, y, quotient, remainder;

    printf("Enter dividend: ");
    if (scanf("%lld", &x) != 1){
        printf("\nNumbers only, please!\n");
        return EXIT_FAILURE;
    }

    printf("Enter divisor: ");
    if (scanf("%lld", &y) != 1){
        printf("\nNumbers only, please!\n");
        return EXIT_FAILURE;
    }
    else if (y == 0){
        printf("\n... Stop playing.\n");
        return EXIT_FAILURE;
    }

    quotient = x / y;
    remainder = x % y;

    if (remainder == 0)
    {
        printf("\n%lld / %lld = %lld\n\n", x, y, quotient);
    }
    else
    {
        printf("\n%lld / %lld = %lld remainder %lld\n\n", x, y, quotient, remainder);
    }
    return EXIT_SUCCESS;
}
