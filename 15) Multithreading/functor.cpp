#include <iostream>
using namespace std;
class Mul
{
public:
    int _val;
    Mul() {}
    Mul(int val) : _val(val) {}
    int operator()(int val)
    {
        return val * val;
    }
};
int main()
{
    Mul mul12(12);
    cout << mul12(2) << endl;
    cout << mul12(3) << endl;
    return 0;
}