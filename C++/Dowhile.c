#include<stdio.h>

void main(){

int pw,c=1;

do{
if (c<=3){
if (c>1){
    printf("\n login failed Try again \n");
}
if(c==3){
    printf("\n this is your last attempt");
}
printf("\n enter your password");
scanf("%d", &pw);
c++;
}
else{
    printf(" login failed your pin is blocked");
    break;
}
}
while(pw!=2341);

if (pw==2341){
    printf("logged in successfully");
}
}



