#include<stdio.h>

int isPalindrome(int num){
    int reversedNum = 0, originalNum = num;

`   
while(num>0){
    reversedNum = reversedNum * 10 + num % 10;
    num/= 10;
}

if (reversedNum == originalNum)
return 1;
else 
return 0;
}

int main(){
    int num;

    printf("enter a number: ");
    scanf("%d", &num);


if (isPalindrome(num))
printf("%d is a palindrome.\n", num);
else 
printf("%d is not a palindrome.\n", num);

return 0;
}