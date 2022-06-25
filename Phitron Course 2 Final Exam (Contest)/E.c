/*
 * https://vjudge.net/contest/500740#problem/E
 */

#include <stdio.h>
#include <math.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {
      if (array[i] < array[min_idx])
        min_idx = i;
    }
    swap(&array[min_idx], &array[step]);
  }
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, min = 1000;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        selectionSort(arr, n);
        for(int i = 1; i < n; i++) {
            if(abs(arr[i - 1] - arr[i]) < min) {
                min = abs(arr[i - 1] - arr[i]);
            }
        }
        printf("%d\n", min);
    }
    return 0;
}
