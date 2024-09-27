#include<iostream>
using namespace std;
class Q{
    public:
int f=-1,r=-1;
int Que[10];
void Enq(int val){
    if(r==9){
        cout<<"\n Queue is full";
    }else{
r++;
Que[r]=val;
cout<<"\n Enqueued";
}
}

void Deq(){
    if(r>=0){
f++;
cout<<"Dequeued : "<<Que[f];
}else{
    cout<<"Queue is Empty";
}
if(f==r){
    f=-1;
    r=-1;
}
}

void display(){
if(r>=0){
for(int i=f+1; i<=r;i++){
    cout<<"\t"<<Que[i];
}}
else{
    cout<<"\n Queue is empty";
}
}

void searchAndIndex(int val) {
        bool found = false;
        if (r >= 0) {
            for (int i = f + 1; i <= r; i++) {
                if (Que[i] == val) {
                    cout << "\nElement " << val << " found at index " << i << " in the queue.";
                    found = true;
                    break;
                }
            }
        }
        if (!found) {
            cout << "\nElement " << val << " not found in the queue.";
        }
    }


void menu(){
 int op,temp;
      cout<<"\n \n \n1.Enqueue \n 2.Dequeue \n 3.Display \n 4.search \n 5.exit";
      cin>>op;
      
      switch(op){
          
          case 1: cout<<"\n Enter a value in Queue";
          cin>>temp;
          Enq(temp);
          break;
          
           case 2: Deq();
          break;
          
          case 3: display();
          break;

         case 4:
            cout << "\nEnter a value to search in the Queue: ";
            cin >> temp;
            searchAndIndex(temp);
            break;
          
           case 5: cout<<"\n Bye bye";
           exit(0);
          break;
          
          default: cout<<"Invalid option";
          
      }
}

};

int main(){
    Q q;
    while(true){
    q.menu();
    }
}