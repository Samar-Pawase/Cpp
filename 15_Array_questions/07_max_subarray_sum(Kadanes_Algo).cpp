// Kadane's Algorithm time complexity O(n).
// Explanation - 'IF we get upon a negative number that is surely going to reduce our sum so at that point make curr sum 0. Else keep adding ith element to the sum.

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

    int currsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n;i++){
        currsum += arr[i];
        if(currsum <0){
            currsum = 0;
        }
        maxsum = max(maxsum, currsum);
    }
    cout << maxsum;
    return 0;
}