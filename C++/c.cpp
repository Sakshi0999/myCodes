#include<iostream>                      //input output stream
using namespace std;
                                   //cin cout -- cin used to take input from user
                                   //cout used to print the code

class Myclass{                   //created a class by name "my class"

    public:                    //access specifier -- declared as a public 
    void fun(){                             //fun is function 
        cout<<"i am function";               //count used to print here 
    }
};
    int main(){
        Myclass M;         //creating an object of class 

        M.fun();          //function calling

        return 0;
    }
