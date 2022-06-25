/*
 * https://vjudge.net/contest/500740#problem/G
 */

#include <stdio.h>

int main() {
    int L, R;
    scanf("%d %d", &L, &R);
    char S[100001];
    scanf("%s", S);
    int range = strlen(S);
    for(int i = 0; i < L - 1; i++) {
        printf("%c", S[i]);
    }
    for(int i = R - 1; i >= L - 1; i--) {
        printf("%c", S[i]);
    }
    for(int i = R; i < range; i++) {
        printf("%c", S[i]);
    }
    printf("\n");
    return 0;
}
