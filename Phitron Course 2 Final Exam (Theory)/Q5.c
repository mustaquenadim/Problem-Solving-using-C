/*
Write a C program that takes a string as input and tell if that string contains all digits from 0 to 9. The maximum length of string could be 1000.
For example:
Input 1:
Ab1DH5shb0djb4r1r5rgr1
Output 1:
NO

Input 2:
1hHfbG5D122Dj887D4HYy9520G63F14F6pLmmn578
Output 2:
YES
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    scanf("%s", str);
    int freq[10] = {0};
    int length = strlen(str);
    for(int i = 0; i < length; i++)
    {
        if(str[i] >= '0' && str[i] <= '9') {
            freq[str[i] - '0']++;
        }
    }
    int count = 0;
    for(int i = 0; i < 10; i++)
    {
        if(freq[i] > 0) {
            count++;
        }
    }
    if(count == 10) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}