// Author: Cuevas, Javier

// gcc Matrix_Calculations.c -o output
// ./output

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int start(int *array, int values, int col) {

    int num;
    int size = sizeof(array) + 1; // adding 1 fixes the bug of stopping before the last value

    printf("Enter %d integers consecutive to represent %d rows of %d digits:\n", values, (int)ceil(size/col), col);

    for (int i = 0; i < values; i++) {
        scanf("%d", &num);
        array[i] = num;
    }

    printf("\n");

    return *array;
}

int arrayOrganization(int *array, int col) {

    int size = sizeof(array) + 1; // HACK: adding 1 to resolve the issue of not having the last number

    printf("Array of %d integers in %d rows and %d columns: \n", size, (int)ceil(size/col), col);

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
        if ((i + 1) % col == 0) {
            printf("\n");
        }
        else {continue;}
    }

    printf("\n");

    return 0;
}

int arraySum(int *array, int col) {

    int sum = 0;
    int size = sizeof(array) + 1; // HACK: adding 1 to resolve the issue of not having the last number

    printf("Sum of each row:\n");

    for (int i = 0; i < size; i++) {
        sum += array[i];
        if ((i + 1) % col == 0) {
            printf("Row %d sum: %d\n", (i+1)/col, sum);
            sum = 0;
        }
        else {continue;}
    }

    return 0;
}

int main(int argc, char **argv) {

    int main_array[1000];
    int values = 9;
    int col = 3;

    start(main_array, values, col); // Asks the user for the 9 integers
    arrayOrganization(main_array, col); // Organizes the array into seperate rows
    arraySum(main_array, col); // Prints the sum of each row into the terminal

    return 0;
}