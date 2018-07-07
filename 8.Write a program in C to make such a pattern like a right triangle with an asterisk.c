/*8.Write a program in C to make such a pattern like a right triangle with an asterisk.c
******
*****
****
***
**
*

*/
#include<stdio.h>
int main()
{
  int i,j,row;
  printf("Input the rows\n" );
  scanf("%d",&row );
  for(i=1;i<=row;i++)
  {
    for(j=1;j<=row+i;j++)
    {
      if(j<=(row+1)-i && j<=(row-1)+i)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
}
