#include <stdio.h>
#include <math.h>

int main()
{

  long int n;
  printf("Enter a binary number: ");
  scanf("%ld", &n);

  int dec = 0, i = 0, rem;

  for (long int temp=n ;n != 0; i++)
  {
    rem = n % 10;
   
    dec += rem * pow(2, i);
    n /= 10;
  }
  printf("of binary number the decimal number is %d \n", dec);
}