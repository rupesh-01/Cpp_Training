#include <bits/stdc++.h>
using namespace std;

int counter = 8;
mutex mtx;
void increaseTheCounterFor100000Time()
{
    for (int i = 0; i < 100000; ++i)
    {
        if (mtx.try_lock())
        { 
            ++counter;
            mtx.unlock();
        }
    }
}
    int main()
    {
        thread t1(increaseTheCounterFor100000Time);
        thread t2(increaseTheCounterFor100000Time);
        t1.join();
        t2.join();
        cout << "counter could increases upto :" << counter << endl;
        return 0;
    }