
#include<iostream>
using namespace std;
class company{

string companyName;
int salary;

public:

void setcompName(string compName){
companyName = compName;
}

void setmySalary(int mySalary){
salary = mySalary;
}

string getcompName(){
    return companyName;
}

int getmySalary(){
    return salary;
}
};


int main(){
company c;

string cm;
cout<<"\n Enter your company name";
cin>>cm;
c.setcompName(cm);
c.setmySalary(50000);

cout<<"\n my company Name is: "<<
c.getcompName();

cout<<"\n my salary is "<<
c.getmySalary();

return 0;

}