#include<stdio.h>
int main(){

int numb, random = 99 ;
printf("enter a number:\n");
scanf("%d", &numb);

do{

if(numb != random){
printf("entered number %d is incorrect, guess the number again\n", numb);
scanf("%d", &numb);
}

}
while (numb != random);
printf("entered number is correct %d \n", numb);

return 0;

}