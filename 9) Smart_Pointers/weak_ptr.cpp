#include <bits/stdc++.h>
using namespace std;
int main()
{
    auto sharedPtr = make_shared<int>(100);
    weak_ptr<int> weakPtr(sharedPtr);
    cout << "weakPtr.use_count():" << weakPtr.use_count() << endl;
    cout << "sharedPtr.use_count():" << sharedPtr.use_count() << endl;
    cout << "weakPtr.expired():" << weakPtr.expired() << endl;
    if (shared_ptr<int> sharedPtrl = weakPtr.lock())
    {
        cout << "*sharedPtr:" << *sharedPtr << endl;
        cout << "sharedPtrl.use_count():" << sharedPtrl.use_count() << endl;
    }
    else
    {
        cout << "Don't get the resource!" << endl;
    }
    weakPtr.reset();
    if (shared_ptr<int> sharedPtrl = weakPtr.lock())
    {
        cout << "*sharedPtr:" << *sharedPtr << endl;
        cout << "sharedPtrl.use_count():" << sharedPtrl.use_count() << endl;
    }
    else
    {
        cout << "Don't get the resource!" << endl;
    }
    return 0;
}
