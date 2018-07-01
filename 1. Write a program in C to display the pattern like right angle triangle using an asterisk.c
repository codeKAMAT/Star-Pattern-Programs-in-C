/*1. Write a program in C to display the pattern like right angle triangle using an asterisk.
The pattern like :
*
**
***
****
*/
#include<stdio.h>
void main()
{
  int i,j;
  for(i=1;i<=4;i++)
  {
    for(j=1;j<=4;j++)
    {
      if(j<=i)
      printf("*");
      else
      printf(" ");
    }
  printf("\n");
  }

}
