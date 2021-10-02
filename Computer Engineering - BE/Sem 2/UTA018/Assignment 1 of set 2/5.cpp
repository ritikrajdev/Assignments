#include <iostream> 
using namespace std; 
  
int main() 
{ 
    //for
    for (int i = 1; i <= 10; i++) 
    { 
        cout << "Hello World\n"; 
    } 

    int i = 1;
    for (; i <= 10; i++) 
    { 
        cout << "Hello World\n"; 
    }

    
    for (; i <= 10;) 
    { 
        cout << "Hello World\n"; 
    }

    //while
    int l = 1; 
  
    // test expression 
    while (l < 6) { 
        cout << "Hello World\n"; 
  
        // update expression 
        l++; 
    } 


    int m=1; 
  
    // test expression 
    while (m < 6) { 
        cout << "Hello World\n"; 
  
        // update expression 
        //m++; 
    } 


    
  
    // test expression 
    while (m) { 
        cout << "Hello World\n"; 
  
        // update expression 
        //m++; 
    } 

    //do while
    int n = 2; 
  
    do { 
        // Loop body 
        cout << "Hello World\n"; 
  
        // Update expression 
        n++; 
  
    } 
    // Test expression 
    while (n < 1);


    int a = 2; 
  
    do { 
        // Loop body 
        cout << "Hello World\n"; 
  
        // Update expression 
        //a++; 
  
    } 
    // Test expression 
    while (a < 1);

    int b = 2; 
  
    do { 
        // Loop body 
        cout << "Hello World\n"; 
  
        // Update expression 
        b++; 
  
    } 
    // Test expression 
    while (b);


  
    return 0; 
}