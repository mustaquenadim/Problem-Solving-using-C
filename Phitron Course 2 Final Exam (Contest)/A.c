/*
 * https://vjudge.net/contest/500740#problem/A
 */

#include <stdio.h>
int main() {
    int num;
    while(scanf("%d", &num)) {
        if(num == 42) {
            break;
        }
        printf("%d\n", num);
    }
    return 0;
}
