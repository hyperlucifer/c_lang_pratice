#include<stdio.h>

int main (){

    int a,b,sum=0;
    scanf("%d%d",&a,&b);
    

    if(a<b){

        for (a=0;a<=b;a++)
        {
            sum+=a;
            
        }
        
    }
    else
    {
        for (b=0;a>=b;b++)
        {
            sum+=b;
            
        }
        
    }
    printf("%d",sum);
    

}