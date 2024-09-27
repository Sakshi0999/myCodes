#include<stdio.h>
void main(){
float C,F;
int choice;
    printf("\n Celcius or Fahrenhite ");
    printf("\n enter your choice :");
    scanf("%d", &choice);
switch (choice)
{
case 1: 
printf("enter the temperature in celcius :\n");
scanf("%f",&C);
F=(C*9/5+32);
printf("entered temperature convered into Fahrenhite %f",F); 
break;

case 2:
printf("\n enter the temperature in Fahrenhite :\n");
scanf("%f",&F);
 C=(F-32)*5/9;
 {
printf("\n entered temperature convered into Celsius %f",C);
}
}
}