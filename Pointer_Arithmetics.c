// https://www.learn-c.org/en/Pointer_Arithmetics
// Copy last three addresses of intarray into parray which is an array of pointers to an int.

#include <stdio.h>
	
int main() 
{
    int intarray[5] = {10,20,30,40,50};
    //-----------------------^
    int *pointer = &intarray[2];
    
    // Array of 3 pointers
    int *parray[3];
    
    // Copy last three addresses of intarray into parray
    // Use parray and pointer
    
    int i;
    for (i = 0; i < 3; i++)
    {
        // code here
        parray[i] = &pointer[i];
    }

    // Test code
    for (i = 0; i < 3; i++) 
    {
        if (parray[i] == &pointer[i]) {
            printf("Matched!\n");
        } else {
            printf("Fail\n");
        }
    }
    return 0;
}