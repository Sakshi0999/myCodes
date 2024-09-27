#include<stdio.h>

int fact(int x){

    if(x<2 || x==1){
        return 1;
    }
    return x*fact(x-1);
}

void main(){
    printf("factoril is : %d", fact(5));
}