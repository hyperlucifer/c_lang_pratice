#include <stdio.h>
int is_prime(int num)
{
    int flag = 1;
    for(int n = 2; n <= num/2; n++){
        if(num % n == 0){
            flag = 0;
            break;
        }
    }
    return flag;
}
int main(){
    for(int num=1, prnt_prime_num=1; prnt_prime_num <= 10; num++){
        if(is_prime(num)){
            printf(" %d ",num);
            prnt_prime_num++;
        }
    }
    return 0;
}