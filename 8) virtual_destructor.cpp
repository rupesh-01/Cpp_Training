#include<iostream>

using namespace std;

class Base{
public:
 
Base()
{
cout<<"base con"<<endl;
}
 virtual ~Base()
{
cout<<"base destructor"<<endl;
}
};

class Derived:public Base{
public:
Derived()
{
cout<<"derived con"<<endl;
}
~Derived()
{
cout<<"Derived destructor"<<endl;
}
};

int main(){
Base *p1=new Derived();
delete p1;
return 0;

}
