// WAP to convert Decimal to Hexadecimal

#include<bits/stdc++.h>
using namespace std;

string Dec2Hex(int n){
    int base = 1;
    string ans = "";
    while(base<=n){
        base *= 16;
    }
    base /= 16;
    while (base>=0)
    {
        int lastdigit = n/base;
        n -= lastdigit * base;
        base /= 16;
        if(lastdigit <= 9){
            ans = ans + to_string(lastdigit);
        }
        else{
            char c = 'A' + lastdigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << Dec2Hex(n);
    return 0;
}