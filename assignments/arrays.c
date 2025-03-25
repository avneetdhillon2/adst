#include <stdio.h>

int main() {
  int myArray[] = {1,2,3,4,5};

  int length = sizeof(myArray) / sizeof(myArray[0]);
  printf("%d\n", length);

  for (int i = 0; i < length; i++) {
    printf("%d\n", myArray[i]);
  }

  printf("%lu\n", sizeof(myArray));

  int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
  int sum = 0;
  float avg;


  int lowestAge = ages[0];
  int highestAge = ages[0];


  int length2 = sizeof(ages) / sizeof(ages[0]);

  for (int i = 0; i < length2; i++) {
    sum += ages[i];
    if (ages[i] < lowestAge) {
      lowestAge = ages[i];
    }
    if (ages[i] > highestAge) {
      highestAge = ages[i];
    }
  }

  avg = sum / length2;

  printf("%d\n", lowestAge);
  printf("%d\n", highestAge);

  printf("The average number is: %.2f\n", avg);

  return 0;
}