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
Node* begininsert(Node* head, int data) {

    Node* newNode = new Node(data);
    newNode -> next = head;
    head = newNode;
    return head;
}
Node* lastinsertion(Node* head, int data) {
    Node* temp = head;
    Node* newNode = new Node(data);
    while(temp -> next != NULL) {
        temp = temp -> next;
    }
    temp -> next = newNode;
    return head;
}
Node* insertionbetween(Node* head, int data, int i){
    Node* temp = head;
    Node* newNode = new Node(data);
    int count = 0;
    while(count < i-1) {
        temp = temp -> next;
        count++;
    }
    newNode -> next = temp -> next;
    temp -> next = newNode;
    return head;
}
Node* deletefromBegin(Node* head) {
    head = head -> next;
    return head;
}
Node* deleteFromEnd(Node* head) {
    Node* temp = head;
    while(temp -> next -> next != NULL) {
        temp = temp -> next;
    }
    temp -> next = NULL;
    return head;
}
Node* deleteSpecific(Node* head, int i) {

    Node* temp = head;
    int count = 0;
    while(count < i-1 && temp!= NULL) {
        temp = temp -> next;
        count ++;
    }
    if(temp != NULL){
      Node* a = temp -> next;
      Node* b = a -> next;
      temp -> next = b;
    }
    return head;
}
Node* searchindex(Node* head, int x) {
    Node* temp = head;
    int count = 0;
    while(temp != NULL) {
       if(temp -> data == x) {
          cout<<"The element is found at index: "<<count<<endl;
          break;
       }
       else {
           temp = temp -> next;
           count++;
       }
    }
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
    cout<<"a) Insertion at the beginning "<<endl;
    cout<<"b) Insertion at the end. "<<endl;
    cout<<"c) Insertion in between. "<<endl;
    cout<<"d) Deletion from the beginning. "<<endl;
    cout<<"e) Deletion from the end. "<<endl;
    cout<<"f) Deletion of a specific node, say 'Delete Node 60'). "<<endl;
    cout<<"g) Search for a node and display its position from head. "<<endl;
    cout<<"h) Display all the node values. "<<endl;
    cout<<"Enter the linked list: "<<endl;
    Node *head = takeInput_better();
    int m = 1;
    while(m == 1) {
    char ch;
    cout<<"Enter the operation you want to perform : "<<endl;
    cin>>ch;
    switch(ch) {
      case 'a': {
          int data;
          cout<<"Enter the data you want to insert in beginning: "<<endl;
          cin>>data;
          head = begininsert(head, data);
          break;
      }
      case 'b': {
          int data;
          cout<<"Enter the data you want to insert at the end: "<<endl;
          cin>>data;
          head = lastinsertion(head, data);
          break;
      }
      case 'c' : {
          int data, i;
          cout<<"Enter the data and the index: "<<endl;
          cin>>data>>i;
          head = insertionbetween(head, data, i);
          break;
      }
      case 'd' : {
          head = deletefromBegin(head);
          break;
      }
      case 'e' : {
          head = deleteFromEnd(head);
          break;
      }
      case 'f' : {
          int i;
          cout<<"Enter the index you want to get deleted: "<<endl;
          cin>>i;
          head = deleteSpecific(head, i);
          break;
      }
      case 'g' : {
          int x;
          cout<<"Enter the key you want to search in linked list: "<<endl;
          cin>>x;
          head = searchindex(head, x);
          break;
      }
      case 'h' : {
          print(head);
          break;
      }
      default:
      cout<<"You entered wrong choice "<<endl;
    }
   cout<<"Do you want to perform more operation: "<<endl;
   cin>>m;
}
return 0;
}