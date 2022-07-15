/*
    Buy 52 Programming Problem & Solution Book from Rokomari.com
    https://www.rokomari.com/book/112234/52-programming-problem-and-solution
*/

// Problem 1 - Even-Odd-1

#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        int n;
        scanf("%d", &n);
        if(n % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }
    return 0;
}