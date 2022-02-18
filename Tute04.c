/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int no1,int no2);//function declaration
int maximum(int no1,int no2);
int multiply(int no1,int no2);

//function main begin program
int main() {
   int no1, no2;//declare variables
   printf("Enter a value for no 1 : ");  //get no 1 value
   scanf("%d", &no1);//read no1 value
   printf("Enter a value for no 2 : ");  //get no 2 value
   scanf("%d", &no2);//read no2 value
   printf("%d ", minimum(no1, no2));  //display minimum value
   printf("%d ", maximum(no1, no2));//display maximum value
   printf("%d ", multiply(no1, no2));//display multiply value
   return 0;
}//end of main function
int minimum(int no1,int no2)    //function Implementation
{
  int min;
  if(no1>no2)
  {
    min=no2;
  }else
  {
    min=no1;
  }
  return min;//return minimum value
}
int maximum(int no1,int no2)
{
  int max;
  if(no1>no2)
  {
    max=no1;
  }else
  {
    max=no2;
  }
  return max;//return maximum value
}
int multiply(int no1,int no2)
{
  int multiply;
  multiply=no1*no2;//calculate the multiply value
  return multiply;//return the multiply value 
}

