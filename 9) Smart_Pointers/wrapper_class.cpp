#include <iostream>

using namespace std;

template <class T>
class smartPtr
{

    

public:
    T *pointer;
    explicit smartPtr(T *p = nullptr) { pointer = p; }
    ~smartPtr() { delete pointer; }
    T& operator*() { return *pointer; }
};

int main()
{

    // float *p = new float(3.142);
    // smartPtr<float> smart = smartPtr(p);
    // cout << *smart << endl;
    char *p = new char('c');
    smartPtr<char> smart = smartPtr(p);
    cout << *smart << endl;
}
