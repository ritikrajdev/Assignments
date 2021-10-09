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

class Triangle: public Polygon {
    public:
        void calc_area();
};


void Rectangle::calc_area() {
    cout << "Rectangle area: " << (height*width) << endl;
}

void Triangle::calc_area() {
    cout << "Triangle area: " << (height*width*0.5) << endl;
}

int main() {
    Polygon* sr;
    Polygon* st;
    Rectangle s1;
    Triangle s2;

    sr=&s1;
    st=&s2;
    sr->set_value(5,2);
    st->set_value(5,2);
    sr->calc_area();
    st->calc_area();

    return 0;
}