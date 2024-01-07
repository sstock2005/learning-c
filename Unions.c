// https://www.learn-c.org/en/Unions
// Create a union that stores an array of 21 characters and 6 ints (6 since 21 / 4 == 5, but 5 * 4 == 20 
// so you need 1 more for the purpose of this exercise), you will set the integers to 6 given values and
// then print out the character array both as a series of chars and as a string.

#include <stdio.h>

/* define the union here */
union Characters {
  int intCharacters;
  char chars[sizeof(int)];
};


int main() 
{
    // initializer lists like this are assigned to the first member of the union/struct!
    // There are 6 ints here so...
    union Characters intCharacters;
    intCharacters.intCharacters = {{1853169737, 1936876900, 1684955508, 1768838432, 561213039, 0}};
  
    /* testing code */
    printf("[");
    // only go to 18 because 1 byte is for the terminating 0 and we don't print the last in the loop
    for(int i = 0; i < 19; ++i)
        printf("%c, ", intCharacters.chars[i]);
    printf("%c]\n", intCharacters.chars[19]);

    printf("%s\n", intCharacters.chars);
}