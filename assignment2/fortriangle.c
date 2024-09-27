#include<stdio.h>

void main(){

int n, j;

printf("enter the n number:");
scanf("%d", &n);

for(int i = 0; i < n ; i++){
printf("\n*");

    for(j = 1; j < i+1; j++)
printf("*");
}
}


