#include <bits/stdc++.h>
using namespace std;
/*void fun(int x)
{
    while (x--> 0)
    {
        cout << x << endl;
    }
}
int main()
{
    thread t(fun, 10);
    t.join();
    return 0;
}
*/

/*
int main()
{
    auto fun = [](auto x)
    {
        while (x-- > 0)
        {
            cout << x << endl;
        }
    };
    thread t(fun, 10);
    t.join();
    return 0;
}
*/

/*
class Base
{
public:
    void operator()(int x)
    {
        while (x-- > 0)
        {
            cout << x << endl;
        }
    }
};
int main()
{
    std ::thread t((Base()), 10);
    t.join();
    return 0;
}
*/

/*
class Base
{
public:
    void run(int x)
    {
        while (x-- > 0)
        {
            cout << x << endl;
        }
    }
};
int main()
{
    Base b;
    thread t(&Base ::run, &b, 10);
    t.join();
    return 0;
}
*/

class Base
{
public:
    static void run(int x)
    {
        while (x-- > 0)
        {
            cout << x << endl;
        }
    }
};
int main()
{
    thread t(&Base ::run, 10);
    t.join();
    return 0;
}
