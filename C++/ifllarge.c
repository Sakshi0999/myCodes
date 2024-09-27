#include<stdio.h>

void main(){
    int n1, n2, n3;

    printf("enter three number:");
    scanf("%d %d %d" ,&n1,&n2, &n3);
    if (n1 > n2 && n1> n3) {
        printf("n1 -> %d is greater", n1);
    }
    else if (n2> n1 && n2 > n3)
    {
        printf("n2 -> %d is greater", n2);
    }
    else {
        printf("n3 -> %d is greater", n3);
    }
}
