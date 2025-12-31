// Max and min element in 2D array
#include <stdio.h>

int main() {
  // Aditya Kumar 10092
    int arr[3][3] = {
        {5, 8, 2},
        {9, 3, 6},
        {4, 7, 1}
    };

    int max = arr[0][0];
    int min = arr[0][0];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr[i][j] > max)
                max = arr[i][j];
            if(arr[i][j] < min)
                min = arr[i][j];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}



// output


// Maximum element = 9
// Minimum element = 1
