#include<stdio.h>
#include<string.h>
int main(){

    char name[20]="somnath";
    char lastname[20]="londe";
    char fullname[50];
    char con[80];
    strcpy(fullname,lastname);
    printf("%d\n",strlen(name));
    printf("%s\n",fullname);
    strcat(name,lastname);
    printf("%s",con);
    printf("%d\n",strcmp(name,lastname));
    printf("%s\n",name);

}