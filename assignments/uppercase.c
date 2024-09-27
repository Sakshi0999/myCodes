#include<stdio.h>
void main() {
char character;

printf("enter the character:");   //ask the user to enter a character
scanf("%c", &character);


if ( character >= 'A' && character <= 'Z'){     //to check the character is uppercase or not  
printf("character is uppercase.\n");
}
else {
printf("character is not uppercase.\n");
}
}