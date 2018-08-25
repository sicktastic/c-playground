#include <stdio.h> // A link to an external library...

int main(void) // A necessary function in every C program

{
  int aNumber; // An integer variable

  printf( "Please enter a number: " ); // Display a message
  scanf( "%d", &aNumber );
  printf( "You entered %d", aNumber );
  getchar();

  return 0; // 0 means execution was successful
}
