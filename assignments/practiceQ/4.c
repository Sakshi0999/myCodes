#include<stdio.h>
void main(){

int i, n, sum = 0;
float avg; 

printf("\n enter the 10 numbers\n");

for(i=1; i<=10; i++)
{
printf("number %d", i);
scanf("%d", &n);

sum += n;
avg = sum / 10.0;
}

printf("the sum of 10 number is %d the average is %f :", sum , avg);

}