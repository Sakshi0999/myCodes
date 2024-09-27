#include<stdio.h>

int main(){

int start, end, num, sum;
printf("Enter two numbers: ");
scanf("%d %d", &start, &end);

int flag = 0;
for(num = start; num <= end; num++){
sum = 0;
for(int i = 1; i < num; i++){

if (num % i == 0) 
sum = sum + i;
}

if(sum == num && num != 0){
    printf("perfect number is %d", num);
    flag = 1;
}
}

if(flag != 1){
printf("No perfect number in the range");
}
return 0;
}



