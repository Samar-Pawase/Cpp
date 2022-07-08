// Find sum of each subarray of the given array of size n.


#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Subarray sum
    for (int i = 0; i < n;i++){
        int subSum = 0;
        for (int j = i; j < n;j++){
            subSum += arr[i];
            cout << subSum;
        }
    }
    return 0;
}