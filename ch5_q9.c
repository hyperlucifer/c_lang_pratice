#include <stdio.h>

int main()
{
	int a,n,t,sum=0;
	scanf("%d",&a);
	n=a;
	t=n%10;
	sum=sum+t;
	printf("%d",t);
	while(n!=0){

			t=n%10;

			n=n/10;
			}
			sum=sum+t;
		printf("%d\n%d",t,sum);
		
	
	return 0;
}