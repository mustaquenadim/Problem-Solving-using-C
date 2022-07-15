// Problem 2 - Even-Odd-2

#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        char num[101];
        scanf("%s", num);
        int numberOfDigit = strlen(num);
        char last_digit = num[numberOfDigit - 1];

        if(last_digit % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }
    return 0;
}
