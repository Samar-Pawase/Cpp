// WAP with function to print factorial of a number

#include<iostream>
using namespace std;

int fact(int n){
    int factorial = 1;
    for (int i = n; i > 0;i--){
        factorial *= i;
    }
    return factorial;
}

int main(){
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}