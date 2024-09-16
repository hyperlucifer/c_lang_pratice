#include<stdio.h>
int per(int n){
    int sum=0;
    for (int i = 1; i < n; i++)
	{
		if (n%i==0){

			sum+=i;
            
		}
	}
    if (n==sum){
        return 1;
    }
    else
    {
        return 0;
    }
    

}
int main (){
    int a ;
    scanf("%d",&a);
    if(per(a)==1){
        printf("the num is perfect");

    }
    else
    {
        printf("the num is not perfect");
    }
    
}