#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ShowMenu() {
    printf("\n===== MENU =====\n");
    printf("1. Sum of natural numbers\n");
    printf("2. Sum of squares\n");
    printf("3. Sum of cubes\n");
    printf("4. Harmonic sum\n");
    printf("5. Factorial of n\n");
    printf("6. Show the divisors of a number\n");
    printf("0. Exit the program\n");
    printf("Your choice: ");
}

int main() {
    int choice;

    do {
        ShowMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int n, i = 1;
                double S;
                printf("Enter n:");
                scanf("%d", &n);
                S = 0;
                while (i <= n) {
                    S = S + i;
                    i++;
                }
                printf("Sum of natural numbers from 1 to %d = %.0f\n", n, S);
                break;
            }

            case 2: {
                int n, i = 1;
                double S;
                printf("Enter n:");
                scanf("%d", &n);
                S = 0;
                while (i <= n) {
                    S = S + pow(i, 2);
                    i++;
                }
                printf("Sum of the squares of the first %d natural numbers is = %.0f\n", n, S);
                break;
            }

            case 3: {
                int n, i = 1;
                double S;
                printf("Enter n:");
                scanf("%d", &n);
                S = 0;
                while (i <= n) {
                    S = S + pow(i, 3);
                    i++;
                }
                printf("Sum of the cubes of the first %d natural numbers is = %.0f\n", n, S);
                break;
            }

            case 4: {
                int n;
                float S, i = 1;
                printf("Enter n:");
                scanf("%d", &n);
                S = 0;
                while (i <= n) {
                    S = S + 1 / i;
                    i++;
                }
                printf("The Harmonic Sum from 1 to 1/%d = %g\n", n, S);
                break;
            }

            case 5: {
                int i = 1, n;
                double F = 1;
                printf("Enter n:");
                scanf("%d", &n);

                if (n > 0) {
                    while (i <= n) {
                        F = F * i;
                        i++;
                    }
                    printf("%d! = %.0f\n", n, F);
                } else if (n == 0) {
                    printf("0! = 1\n");
                } else {
                    printf("Factorial not defined\n");
                }
                break;
            }

            case 6: {
                int N, i = 1, D;
                printf("Enter a positive integer:");
                scanf("%d", &N);
                printf("Divisors of %d are:\n", N);
                while (i <= N) {
                    D = N % i;
                    if (D == 0)
                        printf("%d\n", i);
                    i++;
                }
                break;
            }

            case 0:
                printf("Goodbye!\n");
                break;

            default:
                printf("Choice Invalid. Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}
