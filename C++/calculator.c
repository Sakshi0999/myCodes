#include<stdio.h>

int addition(int a, int b) {
return a + b;
}

int substraction(int a, int b) {
return a - b;
}

int multiplication(int a, int b){
return a * b;
}

int divison(int a, int b){
return a / b;
}



int main(){
    int a,b;
    char operation;

    printf("enter the two numbers:");
    scanf("%d %d", &a, &b);
    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &operation);

switch (operation)
{
case '+':
    printf("result : %d\n", addition(a,b));
    break;

    case '-':
    printf("result : %d\n", substraction(a,b));
    break;

case '*':
    printf("result : %d\n", multiplication(a,b));
    break;

    case '/':
    printf("result : %d\n", divison(a,b));
    break;
default:
    printf("invalid operation!\n");
}
return 0;
}