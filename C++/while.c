#include<stdio.h>
void main(){

int num;
printf("enter a number to check whether it is prime or not");
scanf("%d", &num);

int i=2, f=0;
while (i<=num/2)
{
    if(num%i==0)
    {
f=1;                       //flag
    }
    i++;
}
if(f==1){
    printf("\n number is not prime");
}
else {
    printf("\n its a prime number");
}
}