#include <stdio.h>
#include<math.h>


int main() {
    int num1, num2;
    char op;
    char choice;

    do {
        printf("\nEnter Number1: ");
        scanf("%d", &num1);

        printf("Enter Operator (+, -, *, /, ^): ");
        scanf(" %c", &op);

        printf("Enter Number2: ");
        scanf("%d", &num2);

        if (op == '+') {
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
        } 
        else if (op == '-') {
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
        } 
        else if (op == '*') {
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
        } 
        else if (op == '/') {
            if (num2 != 0) {
                printf("%d / %d = %.2f\n", num1, num2, (float) num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed!\n");
            }
        } 
        else if (op == '^') {  // دعم القوة (الأس)
            printf("%d ^ %d = %.2f\n", num1, num2, pow(num1, num2));
        } 
        else {
            printf("Error: Invalid operator!\n");
        }

        printf("\nDo you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y'); // تكرار العملية إذا اختار المستخدم "y"

    printf("Thank you for using the calculator!\n");

    return 0;
}
