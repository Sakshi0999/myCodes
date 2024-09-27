#include<stdio.h>

void ATM( int amount , int deposit);

void mypin(int pin)
{
if (pin == 2024)
 {
 printf("login successfully\n");
 ATM(0,0);

}
else {
    printf("invalid pin, please enter the correct pin\n");
 }
}


void ATM( int amount , int deposit)
{
	int choice;
printf("********Welcome to ATM Service**************\n");
		printf("1. Check Balance\n");
		printf("2. Withdraw Cash\n");
		printf("3. Deposit Cash\n");
		printf("4. Quit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice){
			case 1:
			printf("your balance is Rs.10,000\n");
		break;

		case 2:
		printf("enter the amount you want to withdrawl\n");
		scanf("%d", &amount);
		if ( amount > 10000){
		printf("insufficient fund\n");
		} else {
		printf("please collect your cash %d", amount);
		}
    break;

	case 3:
	printf("enter the deposit amount\n");
	scanf("%d", &deposit);
	printf("your amount of %d is successfully deposit in bank\n", deposit);
	break;

	case 4:
	printf("Quit, Go to the main menu");
	break;

   default:
   printf("\n invalid choice");
}
}


int main(){
int pin;
printf("enter your pin\n");
scanf("%d", &pin);

mypin(pin);

return 0;
}
