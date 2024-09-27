#include<iostream>
using namespace std;

class Taxi{
    private:
    float fare = 12;      //hidden

public :
float meter(float distance)
{
    return fare*distance;
}
};

int main(){
    Taxi x;
    float kms;
    cout<<"enter no. of kilometers you want to travel";
    cin>>kms;
    cout<<"total fare calculated is: "<<x.meter(kms);
}
