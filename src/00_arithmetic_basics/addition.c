#include <stdio.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int main(void)
{
    long long a, b, sum;

    printf("Enter the first number: ");
    if (scanf("%lld", &a) != 1) {
        printf("Numbers only, please\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%lld", &b) != 1) {
        printf("Numbers only, please\n");
        return 1;
    }

    sum = a + b;

    printf("%lld + %lld = %lld\n", a, b, sum);
    return 0;
}