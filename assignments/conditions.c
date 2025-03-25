#include <stdio.h>

int main() {
    /*
    Write a C program to read the age of a candidate and
    determine whether he is eligible to cast his/her own vote.
    Test Data : 21
    Expected Output :
    Congratulations! You are eligible for casting your vote.

    Please use if conditions.
     */



   int age = 15;
   if (age >= 16 && age < 18) {
    printf("You can get a learner's license\n");
   } else if (age>= 18) {
    printf("You can get a class 5 license\n");
   } else {
    printf ("Sorry! You can not get a license, yet \n");
    int age = 21;

    if(age >= 18) {
      printf("Congratulations! You are eligible for casting your vote.");
    } else {
      printf("Sorry, you cannot vote!");
    }
   // int age = 15;
    return 0;
}