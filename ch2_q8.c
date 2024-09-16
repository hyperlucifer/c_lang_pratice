#include<stdio.h>
#include<math.h>

int main(){

	double x1,x2,y1,y2,distance ;
	printf ("enter the first point = ");
	scanf("%lf %lf",&x1,&y1);
	printf ("enter the first point = ");
	scanf("%lf %lf",&x2,&y2);
	distance =sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) );
	printf("the distance between 2 points is %lf\n", distance);

		return 0;
}