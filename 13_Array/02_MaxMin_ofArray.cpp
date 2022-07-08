// Wap to find max and min from an array

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, maximum, minimum;
    maximum = INT_MIN;
    minimum = INT_MAX;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        maximum = max(maximum, arr[i]);
        minimum = min(minimum, arr[i]);
    }
    cout << "Maximum element is "<<maximum << "\n" <<"Minumum element is "<< minimum;
    return 0;
}