/*
 * https://vjudge.net/contest/500740#problem/B
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str[51];
    scanf("%s", str);
    int range = strlen(str), a = 0;
    for(int i = 0; i < range; i++) {
        if(str[i] == 'a') {
            a++;
        }
    }
    if(a <= range / 2) {
        printf("%d\n", a * 2 - 1);
    } else {
        printf("%d", range);
    }
    return 0;
}

