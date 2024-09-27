#include<iostream>
using namespace std; 

int main(){

    int temp, s = 0, m;
    int Arry[]= {3,5,8,13,32,45,78};

    int e = sizeof(Arry)/sizeof(Arry[0]) - 1;

    cout<<"enter a value to search";
    cin>>temp;


    while(s<=e){

    m= s+(e-s)/2;

    if(Arry[m]== temp){
        cout<<"element found at index "<<m;
        break;
    }
    else if(Arry[m]>temp){
        e=m-1;
    }
    else {
        s=m+1;
    }
    }
    return 0;
}