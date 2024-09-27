#include<iostream>
using namespace std;                     //single inheritance 
class Area{
public:
void Rectangle(int l, int b){
    cout<<"the area of rectangle is :"<<l*b;
}
};
class cal: public Area{
    public:
    void use(){
    Area obj;
     obj.Rectangle(5, 2);

    }
};

int main(){
  cal obj;
obj.Rectangle(6,9);
 }