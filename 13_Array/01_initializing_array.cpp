#include<bits/stdc++.h>
using namespace std;


int main()
{
    // // Initializing method 1
    // int arr[4] = {2, 1, 3, 4};
    // cout << arr[3];

    // Initializing Method 2
    // Taking user input
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n;i++){
        cout << arr[i] << "\n";
    }
        return 0;
}