#include<iostream>
#include<string.h>
using namespace std; 

int main(){

int name[] = { 11,3,56,78,4,19};
int max = name[0];
for(int i=1; i<=5; i++){
    if(name[i]> max){                //name[1] > name[0]
        max =  name[i];               // max = name[1]
    }                                   
}

cout<<max;

}