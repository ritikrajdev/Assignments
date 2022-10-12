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

Node* reverse(Node* head) {
    if(head == NULL || head -> next == NULL) {
        return head;
    }
    Node* smalloutput = reverse(head -> next);
    Node* temp = smalloutput;
    while(temp -> next !=NULL) {
      temp = temp -> next;
    }
    temp -> next = head;
    head -> next = NULL;
    return smalloutput;
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
    head = reverse(head);
    cout<<"The reverse linked list is: "<<endl;
    print(head);
    return 0;
}


