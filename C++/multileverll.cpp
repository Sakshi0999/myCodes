#include<iostream>
using namespace std;
class grandfather{
    protected:
    void house(){
        cout<<"\n i am the oldest one..i am grandfather";
    }
};

class father :public grandfather{
    protected:
    void sonn(){
        cout<<"\n i am the older one..i am father";

        house();
    }
};

class sonn :public father{
    public:
    void neww(){
        cout<<"\n i am sonn, i am the younger one";
        sonn();
    }
};

int main(){
    sonn s;
    s.neww();
    return 123;
}