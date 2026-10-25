#include <stdio.h>

int main(void) {
    int userID, password;

    printf("Enter user ID: ");
    scanf("%d", &userID);

    if (userID != 101) {
        printf("User not found\n");
    } else {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password == 4321)
            printf("Login successful\n");
        else
            printf("Incorrect password\n");
    }

    return 0;
}
