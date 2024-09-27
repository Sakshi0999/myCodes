#include<stdio.h>

int GCD(int num1, int num2)

{
int max = (num1 > num2 ? num1 : num2 );
int LCM = max;
while(1){
    if(max % num1 == 0 && max % num2 == 0){
     LCM = max;
     break;
    }
}
max++;

int result_gcd = (num1 * num2) / LCM;
}



int LCM(int num1, int num2, int gcd){

return (num1 * num2) / gcd;


}

int main(){

    int num1, num2, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    gcd = GCD(num1, num2);
    lcm = LCM(num1, num2, gcd);

printf("GCD of %d and %d is %d\n", num1, num2, gcd);
printf("LCM of %d and %d is %d \n", num1, num2, lcm);
    return 0;
}