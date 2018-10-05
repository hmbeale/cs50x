// Integer arithmetic

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for x
    int x = get_int("x: ");

    //check input once
    while ( x > 23 || x< 0){
       x = get_int("x: ");
    }


    for (int i = 0; i <x; i++)
  {

    //print decreasing number of spaces
    //so hashes are right aligned
    for (int k = 0; k < x-i-1; k++){
        printf(" ");
    }

    //print increasing number of hashes
    for (int j = 0; j<=i+1; j++){
          printf("#");
    }


    printf("\n");
  }

}