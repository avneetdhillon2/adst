#include <stdio.h>
#include <string.h>

int main() {
  char hello[] = "hello world";

  printf("%s\n", hello);

  hello[0] = 'j';

  printf("%s\n", hello);

  char carName[] = "Mazda";

  int length = sizeof(carName) / sizeof(carName[0]);

  for (int i = 0; i < length; i++) {
    printf("%c", carName[i]);
  }
  return  0;
}
