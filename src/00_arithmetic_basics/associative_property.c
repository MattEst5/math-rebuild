#include <stdio.h>

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

#define MAX 5

int multiply(int *arr, int count);
int get_multiples(int *arr, int *count);

int main(void)
{
    int number_count = 0;
    int multiples[MAX]; 

    printf("\nAssociative Property of Multiplication\n\n");

    if (get_multiples(multiples, &number_count) == EXIT_FAILURE)
        return EXIT_FAILURE;

    int product = multiply(multiples, number_count);

    printf("\nResult: %d\n", product);

    return EXIT_SUCCESS;
}

int multiply(int *arr, int count)
{
    int prod = 1;

    for (int i = 0; i < count; i++) {
        prod *= arr[i]; 
    }

    return prod; 
}

int get_multiples(int *arr, int *count)
{
    printf("How many numbers do you want to multiply: ");
    if (scanf("%d", count) != 1) {
        printf("I need a number, please\n");
        return EXIT_FAILURE;
    }
    
    if (*count > MAX) {
        printf("No more than 5 numbers\n");
        return EXIT_FAILURE;
    }

    if (*count < 2) {
        printf("Enter at least 2 numbers.\n");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < *count; i++) {
        printf("Enter number %d: ", i+1);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Numbers only, please");
            return EXIT_FAILURE;
        }
    }
    return EXIT_SUCCESS;
}