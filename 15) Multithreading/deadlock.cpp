#include <bits/stdc++.h>
using namespace std;
mutex m1,m2;
void thread1(){
    m1.lock();
    sleep(2);
    m2.lock();
    cout<<"Entered critical section of thread 1"<<endl;
    m1.unlock();
    m2.unlock();
}
void thread2(){
    m2.lock();
    m1.lock();
    cout<<"Entered the critical section of thread 2"<<endl;
    m2.unlock();
    m1.unlock();
}
int main(){
    thread t1(thread1);
    thread t2(thread2);
    t1.join();
    t2.join();
    return 0;
}
