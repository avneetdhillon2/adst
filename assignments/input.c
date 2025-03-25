#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

  int myNum;

  // ask use to enter data
  printf("Enter a number: \n");

  // get the data from the user and save it to the variable
  scanf("%d", &myNum);

  // output the number
  printf("Your number is:  %d\n", myNum);

  int numTwo;
  char myChar;

  printf("Type a number and a character \n");

  scanf("%d %c", &numTwo, &myChar);

  printf("your caharacter is: %c\n", myChar);
  printf("your number is: %d\n", numTwo);

  return 0;
}