#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int binary[32];
    int index = 0;
    printf("Binary representation: ");
    if (n == 0) {
        printf("0");
    } else { 
        while (n > 0) {
            binary[index] = n % 2;
            n /= 2;
            index++;
        }
        for (int i = index - 1; i >= 0; i--) {
            printf("%d", binary[i]);
        }
    }
    return 0;
}
