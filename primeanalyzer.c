#include <stdio.h>

int main() {
    // Using 'long long' to prevent integer overflow (standard int is limited to ~2.1 billion).
    long long number, tempNumber, i;
    char nextChar;

    printf("PRIME NUMBER ANALYSIS\n");
    printf("------------------------------");

    while (1) {
        int isPrime = 1;

        printf("\nEnter a positive integer (0 to exit): ");

        if (scanf("%lld", &number) != 1) {
            printf("Invalid input! Please enter only numeric values.\n");
            while(getchar() != '\n');
            continue;
        }

        nextChar = getchar();

        if (nextChar != '\n') {
             printf("Invalid input! Please enter only a number (no letters/symbols).\n");
             while(getchar() != '\n'); 
             continue;
        }

        if (number == 0) {
            printf("Exiting program. Goodbye!\n");
            break;
        }

        if (number < 2) {
            printf("The number is not prime (The smallest prime number is 2).\n");
            continue;
        }

        // Check for primality
        for (i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            printf("%lld is a prime number.\n", number);
        } else {
            printf("%lld is NOT a prime number.\n", number);
            printf("Prime Factors: ");

            tempNumber = number;
            
            for (i = 2; i * i <= tempNumber; i++) {
                if (tempNumber % i == 0) {
                    int count = 0;
                    while (tempNumber % i == 0) {
                        count++;
                        tempNumber /= i;
                    }
                    printf("%lld", i);
                    if (count > 1) printf("^%d", count);
                    if (tempNumber > 1) printf(" x ");
                }
            }
            if (tempNumber > 1) printf("%lld", tempNumber);
            printf("\n");
        }
    }

    return 0;
}