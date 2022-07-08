// WAP to convert octal number to binary


#include<bits/stdc++.h>
using namespace std;

int Octal2Decimal(int n){
    int ans = 0;
    int base = 1;
    while(n){
        int last_digit = n % 10;
        n /= 10;
        ans += last_digit * base;
        base *= 8;
    }
    return ans;
}

    int main()
{
    int input;
    cin >> input;
    cout << Octal2Decimal(input);
    return 0;
}