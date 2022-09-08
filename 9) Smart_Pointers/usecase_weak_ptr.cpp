#include <bits/stdc++.h>
using namespace std;
struct Son;
struct Daughter;
struct Mother{
  ~Mother(){
    cout <<"Mother gone"<< endl;
 }
  void setSon(const shared_ptr<Son>s){
    mySon=s;
 }
 void setDaughter(const shared_ptr<Daughter>d){
    myDaughter=d;
 }   
  weak_ptr<Son>mySon;
  weak_ptr<Daughter>myDaughter;
};
struct Son{
  Son(shared_ptr<Mother> m):myMother(m){}
  ~Son(){
    cout <<"Son gone"<< endl;
  }
  shared_ptr<const Mother>myMother;
};
struct Daughter{
  Daughter(shared_ptr<Mother>m):myMother(m){}
  ~Daughter(){
    cout <<"Daughter gone"<< endl;
  }
  shared_ptr<const Mother>myMother;
};
int main(){
  cout << endl;
  {
    shared_ptr<Mother> mother=shared_ptr<Mother>(new Mother);
    shared_ptr<Son>son=shared_ptr<Son>(new Son(mother));
    shared_ptr<Daughter>daughter=shared_ptr<Daughter>(new Daughter(mother));
    mother->setSon(son);
    mother->setDaughter(daughter);
  }
  return 0;
}
