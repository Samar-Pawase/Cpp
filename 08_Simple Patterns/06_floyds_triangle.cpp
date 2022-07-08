// WAP to print the following pattern

/*
1
2 3
4 5 6
7 8 9 10 --> for n = 4
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << num<<" ";
            num++;
        }
        cout << endl;
    }
    return 0;
}