/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */
#include <stdio.h>
int main() {
  float mark1, mark2, sum, average;

  printf("Enter the frist mark: ");
 scanf("%f", &mark1);

  printf("Enter the second mark: ");
 scanf("%f", &mark2);

  sum = mark1 + mark2;
  average = sum / 2;

  printf("sum is %.2f", sum);
  printf("\navarage is %.2f", average);

  return 0;
}
