#include<stdio.h>

void val(int x){
printf("%d",x);
}

void ref(int *k){
    printf("\n %d", *k);
}

void main(){
    val(100);             //call by value
    int khajana = 100000;
    int *add = &khajana;        //call by reference 
    ref(add);
}