/*9.Write a program in C to make such a pattern like equilateral triangle by spaces.c
************
*****  *****
****    ****
***      ***
**        **
*          *

*/
#include<stdio.h>
void main()
{
  int i,j,row;
  printf("Input the rows\n" );
  scanf("%d",&row);
  for(i=1;i<=row;i++)
  {
    for(j=1;j<=(row+(row-1));j++)
    {
      if(j<=(row+1)-i || j>=(row-1)+i)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
}
