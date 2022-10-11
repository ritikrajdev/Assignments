#include<iostream>
using namespace std;
class shape
{
            protected:
            float aoc,aor,aot,r,l,b,b1,b2,h;
            public:
            virtual void area()=0;
            virtual void display()=0;
};
class circle:public shape
{
            public:
            void area()
            {
                        cout<<"\nEnter radius of the circle:";
                        cin>>r;
                        aoc=3.14159*r*r;
            }
            void display()
            {
                        cout<<"\nArea of circle:"<<aoc<<endl;
            }
};
class rectangle:public shape
{
            public:
            void area()
            {
                        cout<<"\n\nEnter length and breadth of the rectangle:";
                        cin>>l>>b;
                        aor=l*b;
            }
            void display()
            {
                        cout<<"\nArea of rectangle:"<<aor<<endl;
            }
};
class trapezoid:public shape
{
            public:
            void area()
            {
                        cout<<"\n\nEnter height of the trapezoid:";
                        cin>>h;
                        cout<<"\nEnter length of each base(b1,b2) of the trapezoid:";
                        cin>>b1>>b2;
                        aot=((b1+b2)/2)*h;
            }
            void display()
            {
                        cout<<"\nArea of trapezoid:"<<aot<<endl;
            }
};
int main()
{
            shape *sc;
            shape *sr;
            shape *st;
            circle c;
            rectangle r;
            trapezoid t;
            sc=&c;
            sc->area();
            sc->display();
            sr=&r;
            sr->area();
            sr->display();
            st=&t;
            st->area();
            st->display();
            return 0;
}