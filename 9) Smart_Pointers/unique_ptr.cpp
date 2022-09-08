#include<bits/stdc++.h>
using namespace std;
class Foo{
    int x;
    public:
        explicit Foo(int x): x{x} {}
        int getX() {return x;}
        ~Foo(){ cout<< "Fo Dest" <<endl;}
};

int main(){
    //Foo *f =new Foo(10);
    //cout<< f->getX() << endl;
    unique_ptr<Foo> p1 (new Foo(10));
    unique_ptr<Foo> p2=make_unique<Foo>(20);
    cout<<p1->getX()<<endl;
    cout<<p2->getX()<<endl;
    unique_ptr<Foo> p3=move(p1); //move ownership from p1 to p3
    Foo *p=p2.get(); //get the managed pointer by p3
    Foo *p4=p3.release(); // relese the managed pointer of p3 and return and then p3 points to null
    p2.reset(p4); //reset the p2obj to point to objct of p4 and p4 is deleted here after */
    return 0;
}
