#include <iostream> 
using namespace std; 
  
class Friends
{ 
private: 
    string st; 
  
public: 
     
    Friends (string str)//Parameterized Constructor 
    { 
        st=str; 
    } 
  
    string getst() 
    { 
        return st; 
    } 
    
}; 
  
int main() 
{ 
    //Constructor called. 
    Friends p("Learning is fun with Friends"); 
    cout <<p.getst(); 
  
    return 0;
}