#include<stdio.h>

int printSum(int a, int b){
  int sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);
}


int main(){
    int a, b;
    printf("enter the two numbers");
    scanf("%d %d",&a, &b);

     printSum( a, b);

}
