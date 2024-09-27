#include<iostream>
#include<fstream>

using namespace std;

class Filesystem{

public:

void write(){
    
    ofstream ww("new.txt");

    string temp, str;

    if (ww.is_open()){
cout<<"Enter your stuuff";
cin>>str;

        ww<<str;
        ww.close();
    }
    cout<<"file created";

}

void Read(){

    ifstream rr("new.txt");
    string temp;
    
if(rr.is_open()){
    while(getline(rr, temp)){
        cout<<temp<<endl;
    
    }
    rr.close();
}
else{
    cout<<"file not found";
}
}

};

int main(){

    Filesystem f;
    f.write();
    f.Read();


}