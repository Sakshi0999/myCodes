#include<stdio.h>
#include<math.h>

float SI(float P, float R, float T){

    return (P*R*T)/100;
}

float CI(float P, float R, float T){

float A = P*(pow((1+(R/100)),T));
    return A-P;
}

float Discount(float MRP, float D){

    return (MRP*D)/100;
}


void menu(){
    int choice;
    float P,R,T,MRP,D;
printf("1.SI\n2. CI\n3. Discount\n ");
printf("enter your choice");
scanf("%d", &choice);
switch(choice)
{
case 1:
printf("enter priniciple , rate or time ");
scanf("%f %f %f", &P, &R, &T);
printf("\n simple interest is %f", SI(P,R,T));
    break;

case 2: 
printf("enter priniciple , rate or time ");
scanf("%f %f %f", &P, &R, &T);
printf("\n Compoud interest is %f", CI(P,R,T));   
break;

case 3: 
printf("enter MRP  and discount ");
scanf("%f %f", &MRP, &D);
printf("\n discount is %f", Discount(MRP,D));
 break;

}
}

void main(){

    menu();
}





