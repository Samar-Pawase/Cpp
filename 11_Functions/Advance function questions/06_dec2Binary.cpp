// WAP to convert Decimal to Binary

#include<bits/stdc++.h>
using namespace std;

void Dec2Binary(int n){
    int BinaryNumber[32];
    int i = 0;
    while (n>0)
    {
        BinaryNumber[i] = n % 2;
        n /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--){
        cout << BinaryNumber[j];
    }
}

int main()
{
    int input;
    cin >> input;
    Dec2Binary(input);
    return 0;
}