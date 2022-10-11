#include<iostream>
using namespace std;
class Obj{
    public:
    int b;
};
int main(){
    Obj *ptr[5];
    for(int i=0;i<5;i++){
        ptr[i] = new Obj;
        ptr[i]->b = i;
    }
    for(int i=0;i<5;i++){
        cout<<ptr[i]->b<<endl;
    }
    delete []*ptr;
    return 0;
}