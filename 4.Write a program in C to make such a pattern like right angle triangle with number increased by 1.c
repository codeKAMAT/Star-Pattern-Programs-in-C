/*4.Write a program in C to make such a pattern like right angle triangle with number increased by 1.
The pattern like :

   1
   2 3
   4 5 6
   7 8 9 10

*/
#include<stdio.h>
void main()
{
  int i,j,k=1;
  for(i=1;i<=4;i++)
  {
    for(j=1;j<=4;j++)
    {
      if(j<=i)
      printf("%d",k++);
      else
      printf(" " );
    }
    printf("\n");
  }
}
