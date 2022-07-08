// WAP to convert Binary to decimal

#include<bits/stdc++.h>
using namespace std;

int Binary2Decimal(int n){
    int base = 1;
    int ans = 0;
    while(n){
        int last_digit = n % 10;
        n /= 10;
        ans += last_digit * base;
        base *= 2;
    }
    return ans;
}
    int main()
    {
        int input;
        cin >> input;
        cout<< Binary2Decimal(input);
        return 0;
}