// Given an array of size n. Find max till i for every i from 0 to n-1

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int maximum = INT_MIN;
    for (int i = 0; i < n; i++){
        maximum = max(arr[i], maximum);
        cout << maximum<<" ";
    }
    return 0;
}