#include<stdio.h>

void main(){

int Mobin=1000;

printf("\n Mobin --> My value is %d",Mobin);

printf("\n Mobin --> My address is %p",&Mobin);

int *Vishal = &Mobin;

printf("\n Vishal tell me the address of mobin %p",Vishal);

*Vishal = 0;

printf("\n Mobin --> My value is %d",Mobin);

printf("\n Vishal tell me your address %p",&Vishal);

*Vishal = 2000;

printf("\n Mobin --> My value is %d",Mobin);

printf("\n size of int is --> %d",sizeof(Mobin));

printf("\n size of pointer is --> %d",sizeof(Vishal));
}

