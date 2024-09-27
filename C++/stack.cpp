#include <iostream>
using namespace std;
class STK{
    public:
  int stacks[10];
  int Top = -1;
  void push(int val){
      if(Top==9){
          cout<<"STack is full";
      }
      else{
      Top++; // 0  1, 2, 3,
      stacks[Top]=val;
      }
  }
  void pop(){
        if(Top==-1){
          cout<<"\n Stack is Empty";
      }
      else{
      cout<<stacks[Top]; // Top element
      Top--;
      }
  }
    void peek(){   // peeking the top value
      cout<<stacks[Top];
  }
  void display(){ // display the stack
      if(Top==-1){
          cout<<"\n Stack is Empty";
      }
      else{
      for(int i=Top;i>=0;i--){
          cout<<"\n"<<stacks[i];
      }
      }
  }
  void menu(){
      int op,temp;
      cout<<"\n \n \n1.Push \n 2.Pop \n 3.Peek \n 4.Display \n 5.Exit";
      cin>>op;
      switch(op){
          case 1: cout<<"\n Enter a value";
          cin>>temp;
          push(temp);
          break;
           case 2: pop();
          break;
           case 3:peek();
          break;
          case 4: display();
          break;
           case 5: cout<<"\n Bye bye";
           exit(0);
          break;
          default: cout<<"Invalid option";
      }
  }
};
int main()
{
    STK s;
    while(true){
    s.menu();
}
    return 0;
}










