#include<iostream>
#include<fstream>

using namespace std;

int main(){

ifstream obj("C://Users//HP//Downloads//SakshiParihar.");

string temp;

if(obj.is_open()){
    while(getline(obj, temp)){
        cout<<temp<<endl;
    
    }
    obj.close();
}
else{
    cout<<"file not found";
}

}