#include<stdio.h>
void main(){

int product_price, inserted_amount;
float change;

printf("\n enter the product price: \n");
printf("\n enter the money in the machine:\n");
scanf("%d %d",&product_price, &inserted_amount);



if(inserted_amount>= product_price )
{
change = product_price - inserted_amount;
printf("purchase is successful %f", change);
}


else
{
printf("purchase is not successful");
}
}











