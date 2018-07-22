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
    char character = 'A'; // character approach assining a variable
    int rows ; 
    printf("enter the number of rows : "); // asking for input
    scanf("%d",&rows); // user input
    printf("\n");
    for(int row = 1 ; i<=rows ; i++){ // loop for iterating through rows
        for(int columns = 1 ; j<=i ; j++){ // loop for iterating through columns
            printf("%c",character); // printing the charcter
        }
        printf("\n"); // for changing line
    }
}