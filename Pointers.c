// https://www.learn-c.org/en/Pointers
// Create a pointer to the local variable n called pointer_to_n, and use it to increase the value of n by one.

#include <stdio.h>

int main() 
{
  int n = 10;
  int * pointer_to_n = &n; // pointing to address of n and then dereferencing it to get the value from the address with the & symbol.

  *pointer_to_n += 1;

  /* testing code */
  if (pointer_to_n != &n) return 1;
  if (*pointer_to_n != 11) return 1;

  printf("Done!\n");
  return 0;
}