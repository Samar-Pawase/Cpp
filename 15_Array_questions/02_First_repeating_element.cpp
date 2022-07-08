// Asked in Amazon and oracle

/*

Problem
Given an array ​arr​[] of size ​N​. The task is to find the first repeating element in an array of integers, i.e., an element that occurs more than once and whose index of first occurrence is smallest.

Constraints
1 <= N <= 10​^6
0 <= Ai <= 10^​6

Example
Input​:
7
1 5 3 4 3 5 6

Output​:
2

Explanation​:
5 is appearing twice and its first appearance is at index 2 which is less than 3 whose first occurring index is 3.

*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i< n; i++){
        cin >> arr[i];
    }

    // Initializing index array to -1
    const int N = 1e6 + 2;
    int idx[N];
    for (int i = 0; i < N;i++){
        idx[i] = -1;
    }

    // if value at i in idx is -1 then we will update i at idx[arr[i]] else if there is a value present at the idx[i] then update minimum of minidx and idx[arr[i]] in a variable minidx initialized to INT_MAX earlier.

    int minidx = INT_MAX;
    for (int i = 0; i < n;i++){
        if(idx[i] = -1){
            idx[arr[i]] = i;
        }else{
            minidx = min(minidx, idx[arr[i]]);
        }
    }

    // If no repeating element forund
    if(minidx = INT_MAX){
        cout << "-1";
    }else{
        cout << minidx + 1 << " ";
    }
    return 0;
}    