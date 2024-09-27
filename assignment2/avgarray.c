#include<stdio.h>

int main(){

int student;

printf("enter the number of students\n");
scanf("%d", &student);

int array[student];
printf("enter grades of students\n");
for(int i=0; i < student; i++)
{
printf("Grade for student %d: ", i + 1);
scanf("%d", &array[i]);
}
int sum = 0;
for(int i=0; i < student; i++){
sum = sum + array[i];
}
float average = sum / (float)student;


printf("\n student scores and grades:\n");
for(int i=0; i < student; i++){
char grade;
if (array[i]>= 90){
    grade = 'A';
} else if(array[i]>= 80){
    grade = 'B';
} else if(array[i]>= 70){
    grade = 'C';
}
 else if(array[i]>= 60){
    grade = 'D';
} else {
    grade = 'F';
}

printf("student %d: score = %d, grade = %c\n", i + 1, array[i], grade);
printf("\nAverage Score of the class: %.2f\n", average);


}

}

