// Fib 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144

#include<iostream>
using namespace std;

void fib(int n){
    int t1 = 0;
    int t2 = 1;
    int next_term;
    for (int i = 1; i <= n;i++){
        next_term = t1 + t2;
        cout << t1;
        t1 = t2;
        t2 = next_term;
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    fib(n);
    return 0;
}