#include <stdio.h>

int main(void) {
    int age, creditScore;
    float income;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter monthly income: ");
    scanf("%f", &income);

    printf("Enter credit score: ");
    scanf("%d", &creditScore);

    if (age < 21 || age > 60)
        printf("Loan rejected: age not in 21 to 60\n");
    else if (income < 25000)
        printf("Loan rejected: income below Rs. 25000\n");
    else if (creditScore < 700)
        printf("Loan rejected: credit score below 700\n");
    else
        printf("Loan approved\n");

    return 0;
}
