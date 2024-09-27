#include<stdio.h>
void main(){

    int choice;
    printf("\n Hindi \n English \n Bangali \n Marathi");
    printf("\n enter your choice :");
    scanf("%d", &choice);
switch (choice)
{
case 1: 
printf("your preferred language is Hindi");
    break;

case 2: 
printf("your preferred language is English");
    break;

case 3: 
printf("your preferred language is Bangali");
    break;

case 4: 
printf("your preferred language is Marathi");
    break;

default:
    printf("invalid choice");
}
}