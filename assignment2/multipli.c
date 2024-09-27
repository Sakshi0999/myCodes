#include<stdio.h>

void printMultiplication(int n){
    printf("Multiplication table for %d:\n", n);
for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n", n, i, n * i);
}
}


int main(){
int n;
printf("enter the number:");
scanf("%d", &n);

printMultiplication(n);

}