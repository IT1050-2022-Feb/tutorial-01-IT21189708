/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>
//start main method
int main() {
  int distance;//declare variables
  float amount;

  printf("Input the distance: ");//get distance the van has travelled
  scanf("%d",&distance);//read distance

  if(distance<=30)
  {
    amount=distance*50;   //calculate thae amount
  }else 
  {
    amount=30*50+(distance-30)*40;

  }

  printf("Amount:%.2f",amount);//display amount
  
  return 0;
}//end of main method
