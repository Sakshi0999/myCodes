#include<stdio.h>
void main(){

int i, j;

printf("enter the value:");
scanf("%d", &i);            // i is to print the value from the user

for(j= 1; j<=10; j++)              // j is for the loop

printf("%d * %d = %d \n ", i,j, i*j);              // i * j is to print the output 

}