#include<stdio.h>

int main (){

	int x,y,z=1;

	scanf ("%d%d",&x,&y);

	for(y>0;y--;){

		z=z+x;
		
	}

	printf("%d\n",z );
	return 0;
}