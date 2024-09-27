#include<stdio.h>

int factorial(int num){
if (num == 0 || num == 1)
return 1;
else 
return num * factorial(num - 1);
}



int main(){
    int num;
    printf("enter the number:");
    scanf("%d", &num);

if (num < 0){
    printf("factorial is not defined for negative number.\n");

}
else {
    int result = factorial(num);
    printf("factorial of %d is %d.\n", num, result);
}
return 0;
}

