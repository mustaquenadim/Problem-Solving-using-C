/*
 * https://vjudge.net/contest/500740#problem/C
 */

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int series[n], arr[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &series[i]);
        }
        for(int i = 0, j = n - 1, k = 0; k < n; i++, j--, k++) {
            arr[k] = series[i];
            ++k;
            arr[k] = series[j];
        }
        for(int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
