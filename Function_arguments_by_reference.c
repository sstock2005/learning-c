// https://www.learn-c.org/en/Function_arguments_by_reference
// Write a function called birthday, which adds one to the age of a person.

#include <stdio.h>

typedef struct 
{
  char * name;
  int age;
} person;

/* function declaration */
void birthday(person * p);

/* write your function here */
void birthday(person * p)
{
    (*p).age += 1; // when using a pointer argument you must reference them using (*ARG). The () tells the compiler? that the pointer is outside of the function's memory...
    //p->age dereferences the pointer, this also works and I think is faster??
}

int main() 
{
  person john;
  john.name = "John";
  john.age = 27;

  printf("%s is %d years old.\n", john.name, john.age);
  birthday(&john);
  printf("Happy birthday! %s is now %d years old.\n", john.name, john.age);

  return 0;
}