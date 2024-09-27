#include<stdio.h>
void main(){
int age = 0; 
float time;

printf("enter your age and showtime:");
scanf("%d %f", &age, &time );

if(age < 12 && time < 5)
{
printf("your ticket booking amount is $7\n");
}

else if(age >= 12 && time < 5)
{
printf("your ticket booking amount is $10\n");
}

else
{
printf("showtime is %.2f and booking amount is $12",time);
}
}