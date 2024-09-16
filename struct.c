#include<stdio.h>
struct employ
{
    int age;
    float marks;
    char name[38];
}ram,sidhu;

int main (){

    ram.age=12;
    sidhu.age=19;
    ram.marks=35;
    sidhu.marks=40;

    printf("%f",sidhu.marks); 

}
