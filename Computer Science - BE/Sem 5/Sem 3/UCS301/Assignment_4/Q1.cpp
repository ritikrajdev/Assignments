#include <iostream>
#include <climits>
using namespace std;
template <typename T>
class stackusingArray {
   private:
   T *data;
   int nextIndex;
   int capacity;

   public:
   stackusingArray() {
       data = new T[4];
       nextIndex = 0;
       capacity = 4;
   }

   // return the no of elements present in my stack
   int size () {
       return nextIndex;
   }

   bool isEmpty() {
       if(nextIndex == 0) {
           return true;
       }
       else {
           return false;
       }
   }
   //insert element

   void push(T element) {
     if(nextIndex == capacity) {
        T *newData = new T[2 * capacity];
        for(int i=0; i<capacity; i++) {
            newData[i] = data[i];
        }
        capacity *= 2;
        delete []data;
        data = newData;
        
        //  cout<<"Stack is Full "<<endl;
        //  return;
     }
     data[nextIndex] = element;
     nextIndex++;
   }

   //delete the element

   T pop() {
       if(isEmpty()) {
           cout<< "Stack is empty "<<endl;
           return 0;
       }
       nextIndex--;
       return data[nextIndex];
   }
   // display the top most element

   T peek() {
        if(isEmpty()) {
           cout<< "Stack is empty "<<endl;
           return 0;
       }
       return data[nextIndex-1];
   }
};

int main() {
    stackusingArray<int> s;
    int n;
    int choice;
    cout<<"Enter the optin from the given menu "<<endl;
    cout<<"1.push() "<<endl;
    cout<<"2.peek() "<<endl;
    cout<<"3.pop() "<<endl;
    cout<<"4.size() "<<endl;
    cout<<"5.isEmpty() "<<endl;
    do {
    cout<<"enter your choice "<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1: {
    cout<<"Enter the element you want to push in the given stack "<<endl;
    cin>>n;
    s.push(n);
    break;
    }
    case 2: {
    cout<<"The top element of the stack is: "<< s.peek() <<endl;
    break;
    }
    case 3: {
    cout<<"The popped element of the stack is: "<< s.pop() <<endl;
    break;
    }
    case 4: {
    cout<<"The size of the stack is: "<< s.size() <<endl;
    break;
    }
    case 5: {
    cout<< s.isEmpty() <<endl;
    break;
    }
    default: {
        cout<<"Invalid choice "<<endl;
    }
    } 
  } while(choice!=4);
  return 0;
}