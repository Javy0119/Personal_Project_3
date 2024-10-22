// Author: Cuevas, Javier

// gcc Matrix_Calculations.c -o output
// ./output

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int main(int argc, char **argv) {

    int row; 
    int col; 
    int sum = 0;
    int array[100];
    int matrix[100][100];

    // starting the matrix by asking user input
    if (true) {
        // value inputs
        printf("How many rows? ");
        scanf("%d", &row);
        printf("How many columns? ");
        scanf("%d", &col);

        // input values for your matrix
        printf("\nEnter %d values:\n", row*col);

        for (int i = 0; i < row*col; i++) {
            scanf("%d", &array[i]);
        }

        printf("\n");
    }

    // array --> matrix
    if (true) {
        int i = 0;
        // making the matrix from the array
        for (int rows = 0; rows < row; rows++) {
            for (int cols = 0; cols < col; cols++) {
                matrix[rows][cols] = array[i];
                i++;
            }
        }
    }
 
    // representing the matrix inputed by user
    if (true) {
        printf("Matrix provided:\n");

        for (int rows = 0; rows < row; rows++) {
            for (int cols = 0; cols < col; cols++) {
                printf("%d ", matrix[rows][cols]);
            }
            printf("\n");
        }

        printf("\n");
    }

    // adding rows
    if (true) {
        printf("Sum of each row:\n");

        for (int rows = 0; rows < row; rows++) {
            for (int cols = 0; cols < col; cols++) {
                sum += matrix[rows][cols];
            }
            printf("Row %d: %d\n", rows+1, sum);
            sum = 0;
        }
    }

    return 0;
}