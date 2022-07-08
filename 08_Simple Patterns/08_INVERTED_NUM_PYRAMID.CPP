// WAP to print the following pattern
/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1          pattern for n = 5
*/

#include<iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    for (int i = n; i > 0;i--){
        for (int j = 1; j <= i;j++){
            cout << j<<" ";
        }
        cout << endl;
    }
    return 0;
}