#include<stdio.h>
void main(){

int size;                                 //to create size of array
printf("enter the size of an array");
scanf("%d", &size);


int arry[size];                       //to enter element in the array
int i;
printf("enter the elements in the array");
for(i=0; i<size; i++){
scanf("%d",&arry[i]);
}
for(i=0; i<size; i++)
{
    printf("%d\t",arry[i] );

}

int repeat;                                      //to check the element which is repeating in the array
 printf("enter the element which you want to check");
scanf("%d", &repeat);
int count = 0;
for(i=0; i<size; i++)
{
    if(repeat==arry[i])
    {
        count++;
    }
}
if(count==0)
printf("element not found");
else 
printf("element found %d times", count);

}


