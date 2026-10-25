#include <stdio.h>

int main(void) {
    float amount, discount = 0, delivery = 0, total;
    int membership;

    printf("Enter order amount: ");
    scanf("%f", &amount);

    printf("Membership (1 Premium, 0 Regular): ");
    scanf("%d", &membership);

    if (amount < 0 || (membership != 0 && membership != 1)) {
        printf("Invalid input\n");
        return 0;
    }

    if (amount >= 500) {
        if (membership == 1)
            discount = amount * 0.10;
    } else {
        delivery = 50;
    }

    total = amount - discount + delivery;

    printf("Discount = Rs. %.2f\n", discount);
    printf("Delivery charge = Rs. %.2f\n", delivery);
    printf("Final payable amount = Rs. %.2f\n", total);

    return 0;
}
