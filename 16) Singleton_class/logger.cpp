#include <iostream>
#include "logger.hpp"
using namespace std;
int Logger::loggerCount=0;
Logger* Logger:: loggerInstance=nullptr;
mutex Logger::mtx;
Logger :: Logger ( )
{
    loggerCount++;
    cout<<"New instance created"<<endl;
    cout<<"Current no of Instances : "<<loggerCount<<endl;
}
void Logger :: Log ( string msg ){
    cout<<msg<<endl;
}
Logger* Logger::getLogger(){
    if(!loggerInstance){
        mtx.lock();
        if(loggerInstance==nullptr){
            loggerInstance=new Logger();
        }
        mtx.unlock();
    }
    return loggerInstance;
}

