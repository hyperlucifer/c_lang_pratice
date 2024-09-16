#include<stdio.h>
int main (){
int n;
int c,mod;
printf("enter the number = ");
scanf("%d",&n);
while(n!=0){

		mod=n%10;
		
        switch (mod)
        {
        case 1:
            printf("one ");
            break;
        case 2:                                                                                                                                                                                                                                      ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;
        case 0:
            printf("zero ");
            break;
        
        default:
            break;
        }
		n=n/10;

	}



}