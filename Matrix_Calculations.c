// Author: Cuevas, Javier

// gcc Matrix_Calculations.c -o output
// ./output

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int start(int row, int col) {

    int matrix[row-1][col-1];

    printf("\nEnter %d values:\n", row*col);

    for (int rows = 0; rows < row; rows++) {
        for (int column = 0; column < col; column++) {
            scanf("%d", &matrix[rows][column]);
        }    
    }

    printf("\n");

    return **matrix;
}

int arrayOrganization(int row, int col) {

    int matrix[row-1][col-1];
    int value = 0;

    printf("Array of %d integers: \n", sizeof(matrix));  
    
    for (int rows = 0; rows < row; rows++) {
        for (int column = 0; rows < col; column++) {
            printf("Row %d, Column %d: %d\n", rows+1, column+1, matrix[rows][column]);
        }
    }

    printf("\n");

    return 0;
}

int arraySum(int row, int col) {

    int sum = 0;
    int size = 0;
    int matrix[row-1][col-1];

    printf("Sum of each row:\n");

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum += matrix[i][j];
            if (i = col) {
                printf("Row %d sum: %d\n", (i+1)/col, sum);
                sum = 0;
            }
        }
    }

    return 0;
}

int main(int argc, char **argv) {

    int row; 
    int col; 

    // value inputs
    printf("How many rows? ");
    scanf("%d", &row);
    printf("How many columns? ");
    scanf("%d", &col);

    // Matrix Manipulation
    start(row, col); // Asks the user for input
    arrayOrganization(row, col); // Organizes the array into seperate rows
    arraySum(row, col); // Prints the sum of each row into the terminal

    return 0;
}