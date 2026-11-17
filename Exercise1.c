/*Print a multiplication table of a number entered by the user in pretty form like 
  6 x 1 = 6
  6 x 2 = 12
  6 x 3 = 18
  .
  .
  upto 10
*/

#include<stdio.h>

int main(){

    int num,i;

    printf("--- this is the multiplication table printer. --- \n");
    printf("Enter the number whose multiplication table you want to print:  ");
    scanf("%d",&num);

    for ( i = 0; i < 10 ; i++)
    {
      printf("%d X %d = %d\n",num,(i+1),num*(i+1));
      
    }
    printf("Thank you nice to help you");
    return 0 ;
}
