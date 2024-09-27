#include<stdio.h>
void main(){
int r,c;

printf("\n  enter the rows and columns");
scanf("%d%d", &r, &c);

int arr[r][c];
//int arr2[r][c];
//int arr3[r][c];

printf("\n enter the values");

for(int i=0; i<r; i++){      //rows
    for(int j=0; j<c; j++){              //columns
        scanf("%d",&arr[i][j]);
    }
}

printf("\n matrix --->\n");
for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){    
        printf("%d \t", arr[i][j]);          //columns
}
printf("\n");

}
}