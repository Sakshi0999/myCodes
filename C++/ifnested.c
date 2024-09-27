#include<stdio.h>
void main(){
int age, voterid;

printf("enter your age:");
scanf("%d", &age);
if (age>= 18){
    printf("do you have voter id press 1 for yes and 0 for no:");
    scanf("%d", &voterid);

    if(voterid ==1){
        printf("you are eligible to vote");
    }
    else {
        printf("get your voter id first");
    }
}
else {
    printf("you are not eligible to vote");
}
}