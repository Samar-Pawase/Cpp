#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    student(){
        cout << "Constructor called"<<endl;
    }
    ~student(){
        cout << "Destructor called";
    }

};

int main()
{
    student a;
    return 0; // Destructor will be called after the main function returns
}