#include<stdio.h>

void main(){
    for(int i= 1; i<= 5; i++){       //rows i = 1, i = 2, i=3
        for (int j = 1; j<= 5-i; j++){      //columns j=1 
            printf("  ");
        }
        for (int k=1; k<=i; k++)
        {
            printf("  * ");
        }
        printf("\n");
    }
}