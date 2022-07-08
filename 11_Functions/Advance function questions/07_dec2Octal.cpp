#include<bits/stdc++.h>
using namespace std;

void Dec2Octal(int n){
    int ans = 0;
    int i = 0;
    int OctalNumber[32];
    while(n){
        OctalNumber[i] = n % 8;
        n /= 8;
        i++;
    }
    for (int j = i - 1; j >= 0;j--){
        cout << OctalNumber[j];
    }
}

int main()
{
    int n;
    cin >> n;
    Dec2Octal(n);
    return 0;
}