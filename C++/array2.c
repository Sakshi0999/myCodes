#include<stdio.h>
void main(){
int size;
printf("enter the size of an array");                 //we are taking size of array from user 
scanf("%d", &size);

int Arry[size];


printf("\n enter values in array");
                                                       //taking values from user to create array
for(int i=0;i<size;i++){
    scanf("%d",&Arry[i]);
}
                                     


printf("\n  values in array");                       //priniting values of array

for(int i=0;i<size;i++){
    printf("%d \t",Arry[i]);
}

printf("\n  values in array\n ");                        //printing reverse value of array

for(int i=size-1;i>=0;i--){
    printf("%d \t",Arry[i]);
}


// int high = Arry[0];

// for(int i=1;i<size;i++){
//     if(Arry[i]>high){
//         high=Arry[i];
//     }
// }{
// printf("highest value in the array %d", high);
// }




int temp;
printf("enter the element which you want to find");                 // to find the index of array element
scanf("%d", &temp);

for(int i=0; i<size; i++){
if (Arry[i] == temp){
    printf("element found at %d index" , i);
}
}



int high = Arry[0], secondhigh=0;                       //to find the second highest value in array

for(int i=1;i<size;i++)
{
   if(Arry[i]>high){
             secondhigh = high;
         high=Arry[i];
     }
     else if (Arry[i]<high && Arry[i]>secondhigh){
        secondhigh=Arry[i];
     }
 }
 printf("\n second highest value in the array is %d", secondhigh);
 }
