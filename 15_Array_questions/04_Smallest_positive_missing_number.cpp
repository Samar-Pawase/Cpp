/*
Problem
Find the smallest positive missing number in the given array.
Example:  [0, -10, 1, 3, -20], Ans = 2

Intuition
If in O(1), we can tell if an element is present in an array, then our task will be
simpler.
For that, we will maintain a Check[ ] array, that will if an element x is present in
the array or not.
It will be of boolean type as we only need to check the presence or absence of the
number.
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int arr[n];

    int mx = INT_MIN;

    for (int i = 0; i < n;i++){
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }

    int checkarr[mx+1];
    for (int i = 0; i < mx+1; i++){
        checkarr[i] = 0;
    }

    for (int i = 0; i < n; i++){
        if (arr[i] >= 0){
            checkarr[arr[i]] = 1;
        }
    }
    cout << endl;

    for (int i = 0; i < mx+1; i++){
        if(checkarr[i] == 0){
            cout << i;
            break;
        }
    }
}