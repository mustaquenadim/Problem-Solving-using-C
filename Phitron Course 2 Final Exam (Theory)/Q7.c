/*
Take an array name ar[] of size N where the values will be unique. Also take another integer value named mul as input. Print “YES” if you can make  mul by multiplying two different values from that array. Otherwise, print “NO”. Here, (0 < N <= 100 and 0 <= ar[i] <= N and 0 <= mul <= 10000)
*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int ar[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &ar[i]);
    }
    int mul;
    scanf("%d", &mul);
    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            if(ar[i] * ar[j] == mul) {
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}

