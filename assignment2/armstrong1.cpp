#include<iostream>

using namespace std;
int r, sum=0;
int Arm(int num){
while(num!=0){
r = num%10;         // 153 / 10 = r = 3 , 15/10 - r = 5  // 1%10 = 1
sum += r*r*r ;            // 0+ 3*3*3  27// 27 + 5*5*5 152// 152 + 1*1*1 153
num = num/10;              //153 /10 = Q = 15=num // 15/10 = 1 num
}
return sum;                     // 153
}
int main(){
    int num;                                // 153
cout<<"Eter the num to check";
cin>>num;                         //taking number from user
                                         // 153==153
if(num==Arm(num)){                       // calling the funtion that return the sum of cube of each digit
    cout<<"Armstrong number";
}
else{
    cout<<"not an armstrong";
}
}











