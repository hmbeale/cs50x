#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
  // Prompt user for x
  float x = get_double("x: ");
  int y = 0;

  while (x< 0){
      x = get_double("x: ");
  }

  x = x*100;

  //num quarters
  printf("q");
  printf("\n");
  while ( x>= 25){
      printf("%g", x);
      printf("\n");
      x = round(x);
      x = x-25;
      y++;
  }
  //num dimes
  printf("d");
  printf("\n");
  while ( x>= 10){
      printf("%g", x);
      printf("\n");
      x = round(x);
      x = x-10;
      y++;
  }
  //num nickles
  printf("n");
  printf("\n");
  while ( x>= 5){
      printf("%g", x);
      printf("\n");
      x = round(x);
      x = x-5;
      y++;
  }
  //num pennies
  printf("p");
  printf("\n");
  while ( x>= 1){
      printf("%g", x);
      printf("\n");
      x = round(x);
      x = x-1;
      y++;
  }
  printf("%g", x);
  printf("\n");
  printf("%i", y);
  printf("\n");

}