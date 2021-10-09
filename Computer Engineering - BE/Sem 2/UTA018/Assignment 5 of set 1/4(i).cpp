#include <iostream>    
using namespace std;    
class Package    
{    
    private:    
        int length;    
    public:    
        Package(): length(0) { }    
        friend int display(Package);    
};    
int display(Package b)    
{    
   b.length += 10;    
    return b.length;    
}    
int main()    
{    
    Package b;    
    cout<<"Length of Package: "<< display(b)<<endl;    
    return 0;    
} 