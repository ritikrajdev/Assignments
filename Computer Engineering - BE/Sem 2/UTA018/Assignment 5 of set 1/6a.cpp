#include <iostream>  
using namespace std;  
 class Car {  
   public:  
   float Price = 60000;   
 };  
   class Service: public Car {  
   public:  
   float insurance = 5000;    
   };       
int main(void) {  
     Service p1;  
     cout<<"Price: "<<p1.Price<<endl;    
     cout<<"insurance: "<<p1.insurance<<endl;    
    return 0;  
}  