#include<stdio.h>
#include<math.h>
float power(float c,float d){

    float som= pow(c,d);
    return som;
}
float fact(float a){
    if (a<=1)
    {
       return 1;
    }
    return a* fact(a-1);
} 

int main (){
    float p=2,num,sum=0;
    int term;
    printf("Enter the number = ");
    scanf("%f",&num);
    printf("Enter the term = ");
    scanf("%d",&term);
    while (p<=term)
    {
        sum=num+power(num,p)/fact(p);
        p++;
    }
    printf("%f",sum);
  
    
}