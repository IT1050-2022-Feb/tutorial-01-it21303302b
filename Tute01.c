/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int marks,i,tot=0;
  float average;

  for(i=0;i<2;i++)
  {
    printf("enter mark %d\t:",i+1);
    scanf("%d",&marks);

    tot=tot+marks;
  }

  average=tot/2;

  printf("the average is\t:%.2f",average);
  return 0;
}

