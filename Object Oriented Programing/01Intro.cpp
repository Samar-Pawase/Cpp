/*

Class - Template or blueprint. Class is a user defined data type which contains it's attributes(data members), functions etc. We can use class to create different objects(instance) for the data members. We can access the data members.
By default data members of the class are private. Mention public to make them accessible throughout the code.

*/

#include<bits/stdc++.h>
using namespace std;

class student{
    public: // Making class public to make the data members accessible.
    string name;
    int age;
    bool gender;

    void printInfo(){
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }
};

int main()
{
    student arr[3];
    for (int i = 0; i < 3;i++){
        cin >> arr[i].name;
        cin >> arr[i].age;
        cin >> arr[i].gender;
    }
    for (int i = 0; i < 3;i++){
        arr[i].printInfo();
        arr[i].printInfo();
        arr[i].printInfo();
    }
    return 0;
}