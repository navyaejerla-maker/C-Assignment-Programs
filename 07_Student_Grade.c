#include <stdio.h>

int main(void) {
    int mark;

    printf("Enter mark (0-100): ");
    scanf("%d", &mark);

    if (mark < 0 || mark > 100)
        printf("Invalid mark\n");
    else if (mark >= 90)
        printf("Grade O\n");
    else if (mark >= 80)
        printf("Grade A+\n");
    else if (mark >= 70)
        printf("Grade A\n");
    else if (mark >= 60)
        printf("Grade B\n");
    else if (mark >= 50)
        printf("Grade C\n");
    else
        printf("Fail\n");

    return 0;
}
