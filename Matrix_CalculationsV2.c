// Author: Cuevas, Javier

// gcc Matrix_CalculationsV2.c -o output
// ./output

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char **argv) {
    // Declare the 2D array
    int rows = 100; 
    int col = 100;
    int matrix[rows-1][col-1];

    // Declare the 1D array to store row sums
    int rowSums[1000];

    //enter inputs
    if (true)  {
        printf("Enter row amount: ");
        scanf("%d", &rows);
        printf("Enter columns amount: ");
        scanf("%d", &col);


        // Prompt the user for input
        printf("Enter %d integers consecutive to represent %d rows of %d columns:\n", rows*col, rows, col);
    }

    // Read the 9 integers into the 2D array
    if (true) {
        for (int rowNumber = 0; rowNumber < rows; rowNumber++) {
            for (int columnNumber = 0; columnNumber < col; columnNumber++) {
                scanf("%d", &matrix[rowNumber][columnNumber]);
            }
        }        
    }

    // Display the 2D array
    if (true) {
        printf("\nArray of %d integers in %d rows and %d columns:\n", col*rows, rows, col);
        for (int rowNumber = 0; rowNumber < rows; rowNumber++) {
            for (int columnNumber = 0; columnNumber < col; columnNumber++) {
                printf("%d ", matrix[rowNumber][columnNumber]);
            }
            printf("\n");
        }
    }

    // Traverse the 2D array and calculate the sum of each row
    if (true) {
        for (int rowNumber = 0; rowNumber < rows; rowNumber++) {
            int sum = 0;
            for (int columnNumber = 0; columnNumber < col; columnNumber++) {
                sum += matrix[rowNumber][columnNumber];
            }
            rowSums[rowNumber] = sum; 
        }
    }

    // Display the row sums
    if (true) {
        printf("\nSum of each row:\n");
        for (int rowNumber = 0; rowNumber < rows; rowNumber++) {
            printf("Row %d sum: %d\n", rowNumber + 1, rowSums[rowNumber]);
        }
    }

    return 0;
}