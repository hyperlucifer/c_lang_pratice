#include<stdio.h>
#include<math.h>

int fact(int f){
    if (f<=1)
    {
        return 1;
    }
    return f*(fact (f-1));
}
int power(int n){
    int x=1;
    int y=1;

    int po=pow(x,y);
    y++;
    if (n==0)
    {
        return 1;
    }
    else
    {
        return power(n-1);
    }
    


}
int main()
{
    int n;
    printf("enter the number = ");
    scanf("%d",&n);
    power(n);
    return 0;
}
