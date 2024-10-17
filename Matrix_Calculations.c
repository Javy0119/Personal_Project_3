// Author: Cuevas, Javier

// gcc Matrix_Calculations.c -o output
// ./output

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int num;
int row; 
int col; 


int start(int **matrix) {

    int array[100];
    int col_var = 0;
    int row_var = 0;

    printf("How many rows? ");
    scanf("%d", &row);

    printf("\nGreat! How many columns? ");
    scanf("%d", &col);

    printf("\nEnter %d values:\n", row*col);

    for (int i = 0; i < row*col; i++) {
        scanf("%d", &num);
        array[i] = num;    
    }
    
    for (int i = 0; i < row; i++) {
        matrix[row_var][col_var] = array[i];
        col_var++;
        if ((i+1) % col == 0) {
            row_var++;
            col_var = 0;
        }
        else {continue;}
    }

    printf("\n");

    return **matrix;
}

int arrayOrganization(int **matrix) {

    int value = 0;

    printf("Array of %d integers: \n", sizeof(matrix));  
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Row %d, Column %d: %d\n", i+1, j+1, matrix[i][j]);
        }
    }

    printf("\n");

    return 0;
}

int arraySum(int **matrix) {

    int sum = 0;
    int size = 0;

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

    int **matrix;
    
    start(matrix); // Asks the user for the 9 integers
    arrayOrganization(matrix); // Organizes the array into seperate rows
    arraySum(matrix); // Prints the sum of each row into the terminal

    return 0;
}