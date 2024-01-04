// https://www.learn-c.org/en/Conditions
// In this exercise, you must construct an if statement inside the guessNumber function statement that checks if the number guess is equal to 555. 
// If that is the case, the function must print out using printf "Correct. You guessed it!".
// If guess is less than 555, the function must print out using printf "Your guess is too low." 
// If guess is greater than 555, the function must print out using printf "Your guess is too high."

#include <stdio.h>

void guessNumber(int number)
{
    if (number == 555)
    {
        printf("Correct. You guessed it!\n");
    }
    else if (number < 555)
    {
        printf("Your guess is too low.\n");
    }
    else if (number > 555)
    {
        printf("Your guess is too high.\n");
    }
}
int main()
{
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
    
    return 0;
}