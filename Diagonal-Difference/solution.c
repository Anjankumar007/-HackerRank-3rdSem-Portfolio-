// Diagonal Difference
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int primary_sum = 0;
    int secondary_sum = 0;

    for (int i = 0; i < arr_rows; i++) {
        primary_sum += arr[i][i];
        secondary_sum += arr[i][arr_rows - 1 - i];
    }

    return abs(primary_sum - secondary_sum);
}