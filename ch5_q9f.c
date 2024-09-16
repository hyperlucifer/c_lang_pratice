#include <stdio.h>

int main()
{
	int a,n,t,sum=0;
	scanf("%d",&a);
	n=a;
	t=n%10;
	sum=sum+t;
	printf("%d",t);
	for(a;n!=0;n=n/10)
    {

			t=n%10;

			
			}
			sum=sum+t;
		printf("%d\n%d",t,sum);
		
	
	return 0;
}