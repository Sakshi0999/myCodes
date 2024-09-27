#include<stdio.h>
void main (){

int i, cube;

printf("enter the number : \n");
scanf("%d", &cube);

for (i = 1; i <= cube; i++) {  // Start a for loop to iterate 'ctr' times.
printf("Number is : %d and cube of the %d is :%d \n", i, i, (i * i * i));  // Print the number, its cube, and message.
}
}