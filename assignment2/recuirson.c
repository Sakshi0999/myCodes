#include<stdio.h>

static int i=1;
void print(){
    printf("%d\n",i);

    i++;

    if(i<10){
        print();
    }
}
void main(){
    print();
}