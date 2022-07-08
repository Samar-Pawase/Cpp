// WAP with the help of fuctions to find if given triplet is pythagorean or not

#include<bits/stdc++.h>
using namespace std;

bool check_pythagorean(int a,int b,int c){
    int num = max(a, max(b, c));
    return (pow(a, 2) + pow(b, 2) + pow(c, 2) - pow(num, 2) == pow(num, 2));
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(check_pythagorean(a, b, c)){
        cout << "Pythagorean triplets";
    }else{
        cout << "Not pythagorean triplets";
    }
    return 0;
}