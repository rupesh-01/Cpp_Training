#include <iostream>
using namespace std;
class Time
{
private:
    int seconds;
public:
    void getTime(void);
    void putTime(void);
};

void Time::getTime(void)

{
    cout << "Enter time in seconds:" << endl;
    cin>>seconds;
}

void Time::putTime(void)

{
	int h= seconds / 3600;
	int s = seconds % 3600;
	int m = s/60;
	s=s%60;
    cout << "Time in HH::MM::SS"<<endl;
    cout << h << "::" << m<< "::" << s << endl;
}

int main()

{
  Time t;
  t.getTime();
  t.putTime();

    return 0;
}
