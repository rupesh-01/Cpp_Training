#include <iostream>

#include <string>

#include<bits/stdc++.h>

using namespace std;


class Student  //creating a class

{
private:
    char name[50];
    int r;
    int age;
public:
    void getDetails();
    void setDetails();

};


void Student::setDetails()   //accessing outside the class

{
    cout << "Enter the name :"<<endl;
     cin.get();
     cin.getline(name,50);
    cout << "Enter roll no : " << endl;
    cin >> r;
    cout<<"Enter age:"<<endl;
    cin>>age;
}



void Student::getDetails()

{
    cout<<"========================================================"<<endl;
    cout << "NAME : " << name << " ROLL.NO : " << r <<"  AGE :  "<<age << endl;

}



int main(){

    int count;

    cout << "Enter the count of students : ";

    cin >> count;

    if (count > 0) //checking the validity 

    {

        Student studentArray[count];

        for (int i = 0; i < count; i++)

        {

        cout<<"******************************************************"<<endl;

            cout << "For student " << i + 1 << " :" << endl;

            studentArray[i].setDetails();

        }
        cout << "\nYou have entered : " << endl;
        for (int i = 0; i < count; i++)

        {
            studentArray[i].getDetails();
        }

    }

    else

    {
        cout << "Please enter a valid number." << endl;

    }
    return 0;
}
