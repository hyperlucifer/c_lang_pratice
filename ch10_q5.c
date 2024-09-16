#include<stdio.h>
int next(int a,char b){
    printf("previous num %d,next num %d\n",a-1,a+1);
    printf("previous char %c,next char %c",b-1,b+1);
    
}
int main(){

    int m;
    char n;
    scanf("%d%c",&m,&n);
    next(m,n);

}
