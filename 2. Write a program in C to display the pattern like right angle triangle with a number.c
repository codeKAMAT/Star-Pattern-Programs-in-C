/* 2. Write a program in C to display the pattern like right angle triangle with a number.
The pattern like :

1
12
123
1234
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
      printf("%d",j);
      else
      printf(" ");
    }
    printf("\n");
  }
}
