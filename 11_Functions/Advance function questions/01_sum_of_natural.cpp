// WAP with the help of recursion to print sum of first n natural numbers
#include<iostream>
using namespace std;

int sum_of_n(int n){
    return (n*(n + 1)) / 2;
}

int main()
{
    int n;
    cin >> n;
    cout << sum_of_n(n);
    return 0;
}