#include<iostream>
using namespace std;

class spear{
    public:
    void Body(){
        cout<<"\n Aluminum body";
    }
    void Engine(){
        cout<<"\n V4 Engine";
    }
};
class Fuel{
    public:
    void petrol(){
        cout<<"\n premium / speed";
    }
    void Diesel(){
        cout<<"\n Diesel";
    }
};
class Tyre{
    public:
    void Branded(){
        cout<<"\n MRF";
    }
    void local(){
        cout<<"\n China";
    }
};

class Audi :public spear, public Tyre, public Fuel{
    public:
    void Branding(){
        cout<<"Audi R8";
    }
};

int main(){
    Audi a;
    a.Body();
    a.Branded();
    a.Diesel();
    a.Branding();
    return 0;

}