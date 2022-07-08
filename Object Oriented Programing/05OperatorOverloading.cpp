/*
Operators in C++ can be overloaded to perform user-defined functions in classes. Operator overloading in C++ is an example of compile time polymorphism. It is an idea of giving special meaning to an operator without changing it’s original meaning.
*/

#include<bits/stdc++.h>
using namespace std;

class student{
    public:
        string name;
        int age;
        bool gender;

    student(string n, int a, bool g){
        name = n;
        age = a;
        gender = g;
    }

    student(){
        // DEFAULT CONSTRUCTOR
    }

    bool operator==(student &a)
    {
        bool cnd = (name == a.name && age == a.age && gender == a.gender);
        if (cnd)
        {
            return 1;
        }
        return 0;
    }
};

int main()
{
    student a;
    a.name = "Samar";
    a.gender = 1;
    a.age = 20;

    student b("Samar", 20, 1);
    student c("Vivek", 20, 1);

    cout << (a == b) << " " << (c == b);
    return 0;
}