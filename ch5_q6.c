#include<stdio.h>

int main (){

	int x,y,z=1;

	scanf ("%d%d",&x,&y);

	while(y>0){

		z=z*x;
		y--;
	}

	printf("%d\n",z );
	return 0;
}