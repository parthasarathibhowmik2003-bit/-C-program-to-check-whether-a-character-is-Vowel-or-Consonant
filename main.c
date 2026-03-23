#include <stdio.h>

int main() {
    char ch;

    printf("=== Check Vowel or Consonant ===\n\n");

    printf("Enter a Character: ");
    scanf("%c", &ch);

    // Check if it's an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {

        // Check Vowel using OR conditions
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("\nResult: '%c' is a VOWEL. ✓\n", ch);
        } else {
            printf("\nResult: '%c' is a CONSONANT. ✗\n", ch);
        }

    } else {
        printf("\nError: '%c' is NOT an Alphabet!\n", ch);
    }

    return 0;
}
