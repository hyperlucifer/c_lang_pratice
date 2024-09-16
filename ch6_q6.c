#include<stdio.h>

int main (){

    int a,b,sum=1 ;
    scanf("%d%d",&a,&b);

    if(a<b){


        while (a<=b)
        {
            sum*=a;
            a++;
        }
        
    }
    else
    {
        while (b<=a)
        {
            sum*=b;
            b++;
        }
        
    }
    printf("%d",sum);
    

}