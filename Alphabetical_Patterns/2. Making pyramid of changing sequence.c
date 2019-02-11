/*
A
BB
CCC
DDDD
EEEEE

untill the user wants (upto 26)
using ascii code approach
*/

# include <stdio.h>
int main()
{
    /* code */
    char character = 65 ; 
    int rows ;
    printf("enter no. of rows : ");
    scanf("%d",&rows);
    if(rows <= 26){
        
        for(int i = 1; i <= rows; i++)
        {
            for(int j = 1; j <= i; j++){
                printf("%c",character);
            }
            printf("\n");
            character += 1 ;
        }
        
    }
    
    else
    {
        printf("out of index");
    }
    
    return 0;
}
