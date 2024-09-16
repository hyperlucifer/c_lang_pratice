#include<stdio.h>

int even(int n){
    if (n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int main (){

    int a=11;
    printf("%d", even(a));
}