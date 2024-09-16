#include<stdio.h>
int power(int x,int y){
    int z=1;
    while(y>0){

		z=z*x;
		y--;
	}
    return z;
}
int main (){
    printf("%d",power(2,3));
}