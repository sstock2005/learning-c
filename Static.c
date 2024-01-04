// https://www.learn-c.org/en/Static
// In this exercise, try to find the sum of some numbers by using the static keyword. 
// Do not pass any variable representing the running total to the sum() function.

// Note: By default, functions are global in C. If we declare a function with static, the scope of that function is reduced to the file containing it.


#include <stdio.h>

int sum (int num) 
{
    // find sum to n numbers
    static int sum;
    sum += num;
    return sum;
}

int main() 
{
    printf("%d ",sum(55));
    printf("%d ",sum(45));
    printf("%d ",sum(50));
    return 0;
}