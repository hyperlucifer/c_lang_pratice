#include <stdio.h>
#include <math.h>

int main()
{

  long int n;
  printf("Enter a binary number: ");
  scanf("%ld", &n);

  int dec = 0, i = 0, rem;

  while (n != 0)
  {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }
  printf("of %ld binary number the decimal number is %d \n", n, dec);
}