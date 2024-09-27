#include<stdio.h>
void main(){

int a;
printf("enter the student score:");
scanf("%d", &a);

if (a >= 90 && a <= 100)
printf("student pass with grade A : %d", a);

else if( a >= 80 && a <= 89)
printf("student pass with grade B : %d", a);

else if (a >= 70 && a <= 79)
printf("student pass with grade C : %d", a);

else if ( a >= 60 && a <= 69)
printf("student pass with grade D : %d", a);

else
printf("student is Fail");

}