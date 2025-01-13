#include <stdio.h>
#include <ctype.h> 
int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    char *ptr;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    ptr = str;
    while (*ptr != '\0') {
        char ch = tolower(*ptr);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        ptr++;
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    return 0;
}
