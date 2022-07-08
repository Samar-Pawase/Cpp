// WAP to print the following pattern
/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1  pattern for n = 5
*/

#include<iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= i;j++){
            bool condition = ((i % 2 == 0) && (j % 2 == 0)) || ((i % 2 != 0) && (j % 2 != 0));
            // Another condition can be to check if row + col ie i+j is even. If i+j is even print 1 else print 0.
            if (condition){
                cout << "1 ";
            }
            else{
                cout << "0 ";
            }
        }
        cout << endl;
    }
    return 0;
}