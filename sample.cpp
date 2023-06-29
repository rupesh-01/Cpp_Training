#include<stdio.h>
#include<iostream>
using namespace std;

void third_helper(){
    cout<<"This will help second_helper";
}
void second_helper(){
    cout<<"This will help the helper";
    third_helper();
}
void helper(){
    cout<<"This will help main";
    second_helper();
}
void main(){
    cout<<"Hello word";
    helper();
}
