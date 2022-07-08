// Constructors


#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    student(){
        cout << "Default constructor" << endl;
    }//DEFAULT CONSTRUCTOR. It is initialized when an object is created without the parameters, if there exists a method to create objects with parameters.

    student(string n, int a, bool g)
    {
        cout << "Parameterised constructor" << endl;
        name = n;
        age = a;
        gender = g;
    } //PARAMETERISED CONSTRUCTOR

    student(student &a){
        cout << "Copy constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }// COPY CONSTRUCTOR. Copy constructor copies values of one object into another.

    void printInfo(){
        cout << name<<" ";
        cout << age<<" ";
        cout << gender<<" ";
        cout << endl;
    }
};

int main()
{
    student a("Samar", 20, 1); // Will call parameterised constructor
    student b; // will call default constructor
    student c = a; // will call copy constructor

    // Can also be defined as
    // student c(a);
    return 0;
} 