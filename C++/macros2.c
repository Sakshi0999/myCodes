#include<stdio.h>
#define CI(p,r,t)   p*r*t
#define Rectangle(w,l)   w*l   
#define triangle(b,h)   0.5*(b*h)

void main(){

printf("\n compound interest %d", CI(4,5,6));
printf( "\n area of Rectangle %d", Rectangle(9,9));
printf("\n area of triangle %f", triangle(3,2));
}