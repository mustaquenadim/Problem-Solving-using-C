/*
 * https://vjudge.net/contest/500740#problem/F
 */

#include <stdio.h>

int main() {
    int N, K, value = 1;
    scanf("%d %d", &N, &K);
    while(N--) {
        if(value * 2 < value + K) {
            value *= 2;
        } else {
            value += K;
        }
    }
    printf("%d\n", value);
    return 0;
}
