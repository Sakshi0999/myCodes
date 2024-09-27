#include<stdio.h>
int gcd(int a, int b);

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int max = (num1 > num2) ? num1 : num2;
    int lcm = max;
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break;
        }
        max++;
    }
    int result_gcd = (num1 * num2) / lcm;

    printf("GCD of %d and %d is %d\n", num1, num2, result_gcd);

    return 0;
}




