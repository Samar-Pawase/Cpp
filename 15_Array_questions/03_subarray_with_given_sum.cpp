/*
Problem
Given an unsorted array ​A ​of size ​N​ of non-negative integers, find a continuous
subarray which adds to a given number ​S.

Constraints
1 <= N <= 10^​5
0 <= Ai <= 10^​10

Example
Input​:
N = 5, S = 12
A[] = {1,2,3,7,5}

Output​: ​2 4
Explanation​: ​The sum of elements from 2nd position to 4th position is 12.

Solution
Brute Force Solution
*/

// APPROACH 1 Time complexity O(n^2)

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
    int S;
    cin >> S;

    for (int i = 0; i < n; i++){
        int ans = 0;
        for (int j = i; j < n; j++){
            ans += arr[j];
            if (ans == S){
                cout << i+1 << " " << j+1 << " ";
                break;
            }
        }
    }

    return 0;
}

// // APPROACH 2 Time complexity O(n^2)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    int sum;
    cin >> sum;
    int start = 0;
    int i;
    int currsum = arr[0];

    for (i = 1; i <= n;i++){
        while (currsum > sum && start<i-1){
            currsum -= arr[start];
            start++;
        }
        if(currsum == sum){
            cout << start << " " << i-1;
            return 1;
        }
        if (i < n){
            currsum += arr[i];
        }
    }
    return 0;   
}