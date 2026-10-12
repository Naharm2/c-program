#include <stdio.h>

int main() {
    int number;

    // The loop now repeats ONLY if the number is zero or negative
    do {
        printf("Enter a positive number: ");
        scanf("%d", &number);
    } while (number <= 0); 

    // Once a valid positive number is entered, the loop exits
    int sum = number + number;
    printf("Sum (Number doubled): %d\n", sum);

    return 0;
}
