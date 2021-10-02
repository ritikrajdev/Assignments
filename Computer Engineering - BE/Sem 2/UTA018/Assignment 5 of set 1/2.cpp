#include <iostream>
using namespace std;

class Polygon {
    public:
        void set_value(int a, int b){
            height=a;
            width=b;
        }
        virtual void calc_area() = 0;
    protected:
        int height;
        int width;
};

class Rectangle: public Polygon {
    public:
        void calc_area();
};
void Rectangle::calc_area() {
    cout << "Rectangle area: " << (height*width) << endl;
}

int main() {
    Rectangle s1;
    s1.set_value(5,2);
    s1.calc_area();

    return 0;
}