#include<iostream>
#include<fstream>

using namespace std; 

int main(){

    ofstream obj("file.txt");

    if (obj.is_open()){
        obj<<"Hello developers";
        obj.close();
    }
    cout<<"file created";

    return 0;
}