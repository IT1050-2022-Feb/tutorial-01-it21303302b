/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() 
{
  int i,ad;
  float tot,n;

  printf("enter last number\t:");
  scanf("%f",&n);

  tot=(float) (1+n)*(n/2);

  printf("the total is\t:%.2f",tot);

  return 0;
}

