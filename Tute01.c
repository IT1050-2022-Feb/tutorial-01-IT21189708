/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
//start of the main method
int main() {
  int mark1,mark2;//declare variables
  float avg;

  printf("Enter mark 1: ");//get the mark 1
  scanf("%d",&mark1);//read mark1

  printf("Enter mark 2: ");//get the mark 2
  scanf("%d",&mark2);//read mark 2


  avg=(float)(mark1+mark2)/2;//calculate the average of two marks

  printf("Average mark:%.2f",avg);//display average mark
  
  return 0;
}//end of the main method

