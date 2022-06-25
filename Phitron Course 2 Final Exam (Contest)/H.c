/*
 * https://vjudge.net/contest/500740#problem/H
 */

#include <stdio.h>

int main() {
    char S[101];
    scanf("%s", S);
    int range = strlen(S), one = 0, two = 0, three = 0;
    for(int i = 0; i < range; i++) {
        if(S[i] == '1') one++;
        else if(S[i] == '2') two++;
        else if(S[i] == '3') three++;
    }
    if(one > 0) {
        printf("1");
        one--;
    } else if(two > 0) {
        printf("2");
        two--;
    } else if(three > 0) {
        printf("3");
        three--;
    }
    while(one > 0) {
        printf("+1");
        one--;
    }
    while(two > 0) {
        printf("+2");
        two--;
    }
    while(three > 0) {
        printf("+3");
        three--;
    }
    return 0;
}
