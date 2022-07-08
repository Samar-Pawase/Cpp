// WAP to print the prime numbers between given two numbers with the help of function


#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
    for (int i = 2; i < sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

    int main()
{
    int start, end;
    cin >> start >> end;
    for (int i = start; i < end;i++){
        if(isPrime(i)){
            cout << i << endl;
            
        }
    }
    return 0;
}