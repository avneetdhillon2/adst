#include <stdio.h>
#include <string.h>

int main() {

    /*
      write a C program which takes 2 strings and copies the content
      of one to the other.
     */

    char str1[20] = "Hello World!";
    char str2[20];

    // Copy str1 to str2
    strcpy(str2, str1);

    // Print str2
    printf("%s", str2);

    return 0;
}