#include<stdio.h>
void main (){

int i, n, sum = 0; 

printf("\n enter the numbers");
scanf("%d", &n);

printf("\n the first natural numbers are %d: \n", n);

for (i =1; i<=n; i++)
{
    printf("%d", i);
sum += i;
}
    printf("\nThe sum of first %d natural numbers is: %d\n", n, sum);
}
















}