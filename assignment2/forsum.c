#include<stdio.h>

int main(){

int start, end , sum = 0;


printf("enter the numbers:\n");
scanf("%d %d", &start,  &end);

if ( start > end )
{
int temp = start; 
start = end; 
end = temp;
}

for(int i = start; i<= end; i++){
    if (i % 2 == 0){
        sum = sum + i;
    }
}

printf("The sum of all even numbers between %d and %d is: %d\n", start, end, sum);

return 0;

}