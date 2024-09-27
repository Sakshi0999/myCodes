#include<stdio.h>          //struct is used to use different data type 
#include<stdlib.h>
struct  student{
    char Name[20];
    int age;
    int Roll_no;
};
void main(){
    struct student s;
    printf("\n enter your name");
    gets(s.Name);

    printf("\n enter your age");
    scanf("%d", &s.age);

    printf("\n enter your roll no");
    scanf("%d", &s.Roll_no);

    printf("\n name: %s", s.Name);
    printf("\n age: %d", s.age);
    printf("\n roll no : %d" , s.Roll_no);
}


