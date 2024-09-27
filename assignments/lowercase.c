#include<stdio.h>
void main(){
char character;

printf("enter the lowercase character: ");             //to print lowercase letter
scanf("%c", &character);

if( character >= 'a' && character <= 'z')
{
printf("character is lowercase");
}
else {
    printf("character is not lowercase");
}
}