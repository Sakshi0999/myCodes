#include<stdio.h>

int main(){

int list[6] = { 2, 8, 16, 32, 98 , 55};
int searchElement;
int found = 0;

printf("enter the number you want to search\n");
scanf("%d", &searchElement);

for(int i=0; i < 6; i++){
    if(list[i] == searchElement ){
found = 1;
break;
}
}
if(found) {
        printf("Element %d is found in the list.\n", searchElement);
    } else {
        printf("Element %d is not found in the list.\n", searchElement);
    }

    return 0;
}









