#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int generateRandomNumber() {
    srand(time (NULL));

    int randomNumber = rand() % 100 + 1;

    return randomNumber;
}

int main(){

    printf("randome number %d\n", generateRandomNumber());

    return 0;
}
