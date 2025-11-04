#include <stdio.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int main(void)
{
    int x, a, b, result;
    
    printf("Skeleton: X * (A + or - B)\n\n");

    printf("Enter X: ");
    if (scanf("%d", &x) != 1) {
        fprintf(stderr, "Error: Numbers only, please");
        return EXIT_FAILURE;
    }

    printf("Enter A: ");
    if (scanf("%d", &a) != 1) {
        fprintf(stderr, "Error: Numbers only, please");
        return EXIT_FAILURE;
    }

    printf("Enter B: ");
    if (scanf("%d", &b) != 1) {
        fprintf(stderr, "Error: Numbers only, please");
        return EXIT_FAILURE;
    }

    char op;
    printf("Choose operation (+ or -): ");
    if (scanf(" %c", &op) != 1) {
        fprintf(stderr, "Error reading operator.\n");
        return EXIT_FAILURE;
    }

    if (op != '+' && op != '-') {
        fprintf(stderr, "Error: Only + or - is accepted.\n");
        return EXIT_FAILURE;
    }
    else if (op == '+') {
        result = (x * a) + (x * b);
    }
    else if (op == '-') {
        result = (x * a) - (x * b);
    }

    printf("\n%d * (%d + %d)\n", x, a, b);
    printf("Distributive property: (%d * %d) %c (%d * %d) = %d\n\n", x, a, op, x, b, result);
    printf("Result: %d\n\n", result);

    return EXIT_SUCCESS;
}