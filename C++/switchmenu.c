#include<stdio.h>
void main(){
int menu;

printf("\n Masala dosa \n chole bhature \n pav bhavi \n Poha \n ");
printf("enter numbers to check the menu:");
scanf("%d", &menu);

switch (menu)
{
case 1: 
 printf("Masala dosa");
    break;

case 2: 
 printf("chole bhature");
    break;

case 3: 
 printf("pav bhaji");
    break;

case 4: 
 printf("Poha");
    break;

default:
    printf("no more dishes available");
}














}