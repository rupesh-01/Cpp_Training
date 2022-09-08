#include<iostream>
using namespace std;

class Equal{
    float a;
    float c;
    float area;
    public :
void calc(float l)
{
    a=l;
    c=a+a+a;
    area=(1.73 * a *a )/4;
}
friend void pri(Equal);
};

//friend function
void pri(Equal et)
{
cout<<"area="<<et.area<<endl;
cout<<"circumference="<<et.c<<endl;
}

int main(){

    Equal et;
    et.calc(3);
    pri(et);
    return 0;

}
