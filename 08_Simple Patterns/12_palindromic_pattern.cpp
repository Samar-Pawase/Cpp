// WAP to print the following palindromic pattern for
/*
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5   pattern for n = 5
*/

#include<iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n;i++){
        for (int j = 0; j < (n - i);j++){
            cout << "  ";
        }
        for (int j = i; j >= 1;j--){
            cout << j << " ";
        }
        for (int j = 2; j <= i;j++){
            cout << j << " ";
        }
        cout << endl;
    }
        return 0;
}