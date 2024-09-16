# include <stdio.h>
void main(){
	int value,zeroCount=0,evenCount=0,oddCount=0;
    
	scanf("%d",&value);
	

	for (value;value > 0 ;value = value / 10) {

        value = value % 10;

        if (value==0) 
        {
           zeroCount++;
        }
        if (value%2==0) 
        {
           evenCount++;
        }
        else 
        { 
           oddCount++;
        }
       
    }
    printf("the count of even number is = %d\n",evenCount);
    printf("the count of odd number is = %d\n",oddCount);
    printf("the count of zero number is = %d\n",zeroCount);
}