/*5.Write a program in C to make such a pattern like a pyramid with numbers increased by 1.

   1
  2 3
 4 5 6
7 8 9 10
*/
#include<stdio.h>
void main()
{
  int i,j,k,row;
  printf("Input the rows ");
  scanf("%d",&row);
  for(i=1;i<=row;i++)
  {
    k=1;
    for(j=1;j<=row+i;j++)
    {
      if(j>=(row+1)-i && j<=(row-1)+i && k)
      {
        printf("%d",j);
        k=0;
      }
      else{
        printf(" ");
        k=1;
      }
    }
    printf("\n");
  }
}
