#include<stdio.h>
#include<string.h>

union Employee{

    int EmpID;
    int salary;
    char Name[20];
};

void main(){

union  Employee e;

e.EmpID = 101;
printf("\n The id is %d", e.EmpID);

e.salary = 70000;
printf("\n salary %d", e.salary);

strcpy(e.Name,"Sakshi");
printf("\n Name %s", e.Name);

}