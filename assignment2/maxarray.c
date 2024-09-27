#include<stdio.h>

int main(){

int size;
printf("enter the size of array:");
scanf("%d", &size);


int array[size];
printf("enter the values in array:");
for(int i=0; i<size; i++)
scanf("%d", &array[i]);


int max = array[0];
int min = array[0];

for(int i = 1; i < size; i++ ){
if ( array[i] > max) {
    max = array[i];
}

if ( array[i] < min){
    min = array[i];
}
}

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}






