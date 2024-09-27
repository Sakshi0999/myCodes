#include<stdio.h>

float rectangle1(float l, float b){
return  l*b;
}

float rectangle2(float l, float b){
    return  2*(l+b);
}

void main(){
        float l, b;
    printf("enter the length and width of the rectangle:");
    scanf("%f %f", &l, &b);

  float  area = rectangle1(l, b);
 float perimeter = rectangle2(l, b);

    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

}



