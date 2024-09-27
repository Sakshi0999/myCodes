#include<iostream>
using namespace std;

class Node{                     //this is node of linked list
    public:
    int Data;                     //data part
    Node* Next;                    //address part 
    
    public:
    Node(int data){
        this-> Data = data;               //assigning values to the new node 
        this -> Next = nullptr;           //null in the address part 
    }
};

class Linkedlist{
    public:
    Node* head;           //to point the node 


Linkedlist(){
    head = nullptr;   
}


    void insert(int data) {
        Node* newNode = new Node(data); // Creating a new node 
        if (head == nullptr) {
            head = newNode; // Creating new node as the head if it is the first node 
        } else { // If it's not the first node then 
            Node* temp = head; // Traverse through head to find null in the address part 
            while (temp->Next != nullptr) {
                temp = temp->Next; // Move to the next node
            }
            temp->Next = newNode; // Add the new node at the end
        }
    }

    // Method to display the linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->Data << " ";
            temp = temp->Next;
        }
        cout << endl;
    }
};





int main(){


Linkedlist list;             //creating a object name"list"
list.insert(10);             //insert element in the list using object.
list.insert(20);
list.display();

}
