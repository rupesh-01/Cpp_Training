#include<bits/stdc++.h>
using namespace std;
class Account{
    private:
        int bal;
        static float roi;
    public:
    void setBalance(int b){
        bal=b;
    }
    static void setRoi(float r){
        roi=r;
    }
};
float Account::roi;
int main(){
    Account a1,a2,a3,a5;
    //a1.setRoi(4.5f);
    Account::setRoi(4.5f);
    return 0;
}
