// Sum of all even elements of an array


#include <stdio.h>

int main() {
    int arr[] = {10, 5, 8, 3, 12, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sumEven = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        }
    }

    printf("Sum of even elements = %d\n", sumEven);

    return 0;
}


// output


// Sum of even elements = 36