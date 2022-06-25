/*

Take an integer N as input and make a pattern for that number. Sample is given below.
For example:
Input 1:
5
Output 1:
*
**
***
****
*****
****
***
**
*

Input 2:
7
Output 2:
*
**
***
****
*****
******
*******
******
*****
****
***
**
*

*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i = N - 1; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}