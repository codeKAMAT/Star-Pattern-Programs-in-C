/* 
A
AA
AAA
AAAA
AAAAA

UNTILL THE USER WANTS

*/
# include <stdio.h>

int main(){
    char character = 'A';
    int rows ; 
    printf("enter the number of rows : ");
    scanf("%d",&rows);
    printf("\n");
    for(int i = 1 ; i<=rows ; i++){
        for(int j = 1 ; j<=i ; j++){
            printf("%c",character);
        }
        printf("\n");
    }
}