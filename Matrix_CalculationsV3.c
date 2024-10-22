// Author: Cuevas, Javier

// gcc Matrix_Calculations.c -o output
// ./output

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int start(int *row, int *col, int matrix[1000][1000]) {

    // value inputs
    printf("How many rows? ");
    scanf("%d", row);
    printf("How many columns? ");
    scanf("%d", col);

    // input values for your matrix
    printf("\nEnter %d values:\n", (*row)*(*col));

    for (int rows = 0; rows < *row; rows++) {
        for (int cols = 0; cols < *col; cols++) {
            scanf("%d", &matrix[rows][cols]);
        }    
    }

    printf("\n");

    return 0;
}

int arraySum(int row, int col, int matrix[1000][1000]) {

    int sum = 0;

    printf("Matrix provided: ");

    for (int rows = 0; rows < row; rows++) {
        for (int cols = 0; cols < col; cols++) {
            printf("%d ", matrix[rows][cols]);
            if (cols == col - 1) {
                printf("\n");
            }
            else {continue;}
        }
    }


    printf("Sum of each row:\n");

    for (int rows = 0; rows < row; rows++) {
        for (int cols = 0; cols < col; cols++) {
            sum += matrix[rows][cols];
        }
        printf("Sum of row %d: %d", rows+1, sum);
        sum = 0;
    }

    return 0;
}

int main(int argc, char **argv) {

    int row = 0; 
    int col = 0; 
    int matrix[1000][1000];

    // Matrix Manipulation
    start(&row, &col, matrix); // Asks the user for input
    arraySum(row, col, matrix); // Prints the sum of each row into the terminal

    return 0;
}