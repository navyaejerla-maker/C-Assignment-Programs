#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    ch = (char)tolower((unsigned char)ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' ||
        ch == 'o' || ch == 'u')
        printf("Vowel\n");
    else
        printf("Not a vowel\n");

    return 0;
}
