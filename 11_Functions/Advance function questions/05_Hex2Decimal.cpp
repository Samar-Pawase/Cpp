// WAP to convert Hex to Binary

#include<bits/stdc++.h>
using namespace std;

int Hex2Decimal(string n){
    int ans = 0;
    int base = 1;

    int size = n.size();
    for (int i = size - 1; i >= 0;i--){
        if(n[i]>='0' && n[i]<='9'){
            ans += base * (n[i] - '0');
        }
        if(n[i]>='A' && n[i]<='F'){
            ans += base * (n[i] - 'A' + 10);
        }
    base *= 16;
    }
    return ans; 
}


int main(){
    string input;
    cin >> input;
    cout << Hex2Decimal(input);
    return 0;
}