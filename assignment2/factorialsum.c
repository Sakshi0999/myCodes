#include<stdio.h>

int main(){

int n, sum = 0, factorial = 1;
printf("enter a number: ");
scanf("%d", &n);

if( n == 0 || n == 1)
return 1;
else 
    for(int i = 1;  i <=n ; i++)
      sum = sum + n;

    printf("sum of factorial is %d.\n", sum);

return 0;
}
