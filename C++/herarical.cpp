#include<iostream>
using namespace std;
class RBI{
protected:
void rules(){
    cout<<"\n In Corona , do not bounce any EMIs";
}
};
class HDFC:protected RBI{
public: void ok(){
    rules();
}
};
class SBI:protected RBI{
public: void ok(){
    rules();
}
};
class PNB:protected RBI{
public: void ok(){
    rules();
}
};
class BOI:protected RBI{
public: void ok(){
    rules();
}
};
class AXIS:protected RBI{
public: void ok(){
    rules();
}
};
int main(){
    HDFC h;
    h.ok();
PNB p;
p.ok();
BOI b;
b.ok();
AXIS a;
a.ok();
}









