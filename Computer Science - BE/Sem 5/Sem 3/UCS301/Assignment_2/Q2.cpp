#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int data) {
        this -> data = data;
        next = NULL;
    }
};

Node* takeInput_better() {
 cout<<"Enter the data of your inked List: "<<endl;
 int data;
 cin>>data;
 Node *head = NULL;
 Node *tail = NULL;
 while(data!= -1){
    Node *newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else {
     tail -> next = newNode;
     tail = tail -> next; 
    }
   cin>>data;
 }
 return head;
}

Node* repeat(Node* head, int x) {

    Node* temp = head;
    while(head -> data == x) {
        head = head -> next;
    }
    while(temp -> next != NULL) {

        if(temp -> next -> data == x) {
            temp -> next = temp -> next -> next;
        }
        else {
            temp = temp -> next;
        }
    }
    return head;
}

void print(Node *head){
    Node *temp = head;

    while(temp!=NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
int main()
{
    Node *head = takeInput_better();
    print(head);
    int x;
    cout<<"Enter the key to be removed from linked list: "<<endl;
    cin>>x;
    head = repeat(head, x);
    cout<<"The updated linked list is: "<<endl;
    print(head);
    return 0;
}