#include<stdio.h>
int global = 200;      //global and local variable
void function(){             //local variable can be execute under the function only
    int local = 100;               //global variable can be execute globally in code 
    printf("local var%d", local);
    printf("\nglobal var%d", global);
}
void main(){                    //main fuction is imp to execute the code 
    function();
    printf("global var%d", global);
}