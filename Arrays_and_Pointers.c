// https://www.learn-c.org/en/Arrays_and_Pointers
// The first seven rows of Pascal's triangle are shown below. Note that row i contains i elements. 
// Therefore, to store the numbers from the first three rows, one would require 1 + 2 + 3 = 6 memory slots.
//
//     1
// 
//     1 1
// 
//     1 2 1
// 
//     1 3 3 1
// 
//     1 4 6 4 1
// 
//     1 5 10 10 5 1
// 
//     1 6 15 20 15 6 1
// 
// Complete the skeleton code given below to store the numbers from the first three rows of Pascal's triangle in a two-dimensional "array" using dynamic memory allocation. 
// Note that you must allocate exactly six memory slots to store those six numbers. No extra memory should be allocated. 
// At the end of your program, free all the memory blocks used in this program.

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, j; // i = rows; j = columns;
    /* TODO: define the 2D pointer variable here */
    char **pnumbers;
    /* TODO: complete the following line to allocate memory for holding three rows */
    pnumbers = (char **) malloc(3 * sizeof(int *));

    /* TODO: allocate memory for storing the individual elements in a row */

    // Row 1 has 1 number
    pnumbers[0] = (char *) malloc(1 * sizeof(int));

    // Row 2 has 2 numbers
    pnumbers[1] = (char *) malloc(2 * sizeof(int));

    // Row 3 has 3 numbers
    pnumbers[2] = (char *) malloc(3 * sizeof(int));

    pnumbers[0][0] = 1;
    pnumbers[1][0] = 1;
    pnumbers[1][1] = 1;
    pnumbers[2][0] = 1;
    pnumbers[2][1] = 2;
    pnumbers[2][2] = 1;

    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j <= i; j++) 
        {
            printf("%d", pnumbers[i][j]);
        }

        printf("\n");
    }

    for (i = 0; i < 3; i++) 
    {
        /* free memory allocated for each row */
        free(pnumbers[i]);
    }

    /* free the top-level pointer */
    free(pnumbers);

  return 0;
}