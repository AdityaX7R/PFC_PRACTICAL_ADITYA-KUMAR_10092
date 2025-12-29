// Max and min element of an array


#include <stdio.h>
int main() {
    int arr[] = {25, 10, 45, 5, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Minimum element = %d\n", min);
    printf("Maximum element = %d\n", max);
    return 0;
}


// output

// Minimum element = 5
// Maximum element = 45