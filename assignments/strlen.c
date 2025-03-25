#include <stdio.h>
#include <string.h>

int main(){

  /*
    write a C program which calculates the length and size of an array
    of char.
   */

  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printf("%lu\n", strlen(alphabet));
  printf("%lu\n", sizeof(alphabet));

  return 0;
}
