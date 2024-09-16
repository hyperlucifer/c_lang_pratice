#include <stdio.h>

int main() {
  int year ;
  scanf("%d",&year);
  
  if (year%4==0 || year%100!=0 && year%400==0){
      printf("is the leap year");
  }
  else
  {
       printf("is not leap year");
  }
    return 0;
}