#include<stdio.h>
void main(){

int choice;

printf("\n Enter the number:");
scanf("%d", &choice);

switch (choice)
{
case 1: printf("Monday");
break;

case 2: printf("Tuesday");
break;

case 3: printf("Wednesday");
break;

case 4: printf("Thursday");
break;

case 5: printf("Friday");
break;

case 6: printf("Saturday");
break;

case 7: printf("Sunday");
break;

default:
printf("Invalid choice! Please enter a number between 1 and 7.");

}
}