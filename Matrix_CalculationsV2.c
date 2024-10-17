// Author: Cuevas, Javier

// gcc Matrix_Calculations.c -o output
// ./output

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main() {
    // Declare the 2D array
    int rows = 3; 
    int columns = 3;
    int matrix[3][3];

    // Declare the 1D array to store row sums
    int rowSums[3] = {0};

    // Prompt the user for input
    printf("Enter 9 integers consecutive to represent 3 rows of 3 digits:\n");

    // Read the 9 integers into the 2D array
    for (int rowNumber = 0; rowNumber < rows; rowNumber++) {
        for (int columnNumber = 0; columnNumber < columns; columnNumber++) {
            scanf("%d", &matrix[rowNumber][columnNumber]);
        }
    }

    // Display the 2D array
    printf("\nArray of 9 integers in 3 rows and 3 columns:\n");
    for (int rowNumber = 0; rowNumber < rows; rowNumber++) {
        for (int columnNumber = 0; columnNumber < columns; columnNumber++) {
            printf("%d ", matrix[rowNumber][columnNumber]);
        }
        printf("\n");
    }

    // Traverse the 2D array and calculate the sum of each row
    for (int rowNumber = 0; rowNumber < rows; rowNumber++) {
        int sum = 0;
        for (int columnNumber = 0; columnNumber < columns; columnNumber++) {
            sum += matrix[rowNumber][columnNumber];
        }
        rowSums[rowNumber] = sum; 
    }

    // Display the row sums
    printf("\nSum of each row:\n");
    for (int rowNumber = 0; rowNumber < rows; rowNumber++) {
        printf("Row %d sum: %d\n", rowNumber + 1, rowSums[rowNumber]);
    }

    return 0;
}