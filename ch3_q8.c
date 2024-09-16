#include <stdio.h>

int main(){

	int b;
	int s;
    printf("enter the buying price \n");
    scanf ("%d",&b);
    printf("enter the  price \n");
    scanf ("%d",&s);

    if (b<s)
    {
    	printf("you made profit of %d\n",b-s );
    }
    else {
    	printf("you made loss of %d ",s-b);
    }
    return 0;
}