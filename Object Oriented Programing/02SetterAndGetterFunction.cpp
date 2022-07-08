/*
Setter and Getter functions - We can access the private data members of the class with the help of functions declared inside the class. Setter and getter functions can be used to Set the name and print the name(or get the name).

*/

#include <bits/stdc++.h>
using namespace std;

class student
{
    int age;
    public:
    // Here public is mentioned after the data member age, therefore the member age is still private data member
    string name;
    bool gender;

    void setAge(int a){
        age = a;
    }
    void getAge(){
        cout << age << endl;
    }

    void printInfo(){
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }
};


int main()
{
    student arr[3];
    for (int i = 0; i < 3; i++){
        cin >> arr[i].name;
        int a;
        cin >> a;
        arr[i].setAge(a);
        cin >> arr[i].gender;
    }
    for (int i = 0; i < 3; i++){
        arr[i].printInfo();
        arr[i].printInfo();
        arr[i].printInfo();
    }
    return 0;
}