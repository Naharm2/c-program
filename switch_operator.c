#include <stdio.h>

int main() {
    float num1, num2;
    char op; // Changed type to char and renamed to avoid keywords

    printf("Enter any two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter the operator (+, -, *, /): ");
    // The space before %c skips any leftover newline characters in the input buffer
    scanf(" %c", &op); 

    switch(op) {
        case '+': 
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2); 
            break;
        case '-': 
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2); 
            break;
        case '*': 
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2); 
            break;
        case '/': 
            if(num2 != 0.0f) 
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2); 
            else 
                printf("Error! Division by zero.\n"); 
            break;
        default: 
            printf("Invalid operator!\n"); 
    }

    return 0;
}
