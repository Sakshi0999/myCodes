#include<stdio.h>

float calculateAverage( float a, float b)
{
float Average = (a + b) / 2.0f;
printf("float average of %f and %f is %.2f", a,b, Average);
return Average;
}

int main(){
    float a, b; 
    printf("enter the two number");
    scanf("%f %f", &a, &b);

    calculateAverage(a,b);

    return 0;

}