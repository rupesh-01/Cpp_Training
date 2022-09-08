#include<bits/stdc++.h>
using namespace std;
class Foo{
    int x;
    public:
        Foo(int x): x{x} {}
        int getX() {return x;}
        ~Foo(){ cout<< "~Foo" <<endl;}
};

int main(){
    shared_ptr<Foo> sp (new Foo(100));
    cout<<sp->getX()<<endl;
    cout<<sp.use_count()<<endl;
    shared_ptr<Foo> sp1=sp;
    cout<<sp.use_count()<<endl;
    cout<<sp1.use_count()<<endl;
    return 0;
}
