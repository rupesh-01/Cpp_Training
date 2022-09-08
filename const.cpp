//const variables
/*
#include<iostream>
using namespace std;
int main(){
const int n=10;
const int x=n+5;
x=x+10; //gives an error
cout<<"n:"<<n<<endl;
cout<<"x:"<<x<<endl;
return 0;
} */


/*//const class data members
#include<iostream>
using namespace std;
class Test{
const int i=10;
public:
//Test():i(2){}
void show(int x){
i=x;//compile time error
cout<<"value of i"<<i<<endl;
}
};
int main(){
Test t;
t.show(10);
return 0;
} */



/*
#include<bits/stdc++.h>
using namespace std;
class Con
{
   int i=10;
   public:
   void show()const{
    i++;
    cout<<i<<endl;
   }                             //doesn't work
   
};
int main()
{
    Con c;
    c.show();
   return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
class Con
{
   int i=10;
   public:
   void show(){
    i++;                               //works
    cout<<i<<endl;
   }
   
};
int main()
{
    Con c;
    c.show();
   return 0;
}
