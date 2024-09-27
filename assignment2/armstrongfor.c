#include<stdio.h>

int main(){

int start ,end;
printf("enter a range: ");              
scanf("%d %d", &start , &end);            

printf("Armstrong numbers between %d and %d are: ", start, end);

for(int i = start; i <= end; i++){
int num = i;
int sum = 0;

while(num!=0){
int r = num%10;                               
sum += r*r*r;    
num = num/10; 
}
if(sum == i){
    printf("%d\n", i);
}          
}
return 0;
}
