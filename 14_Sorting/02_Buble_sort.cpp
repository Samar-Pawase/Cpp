// Bubble sorting algorithm for Array sorting
// Repeatedly swap two adjacent elements if they are in wrong order

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

    // Sorting Algo
    for (int i = 0; i < n-1;i++){
        for (int j = 0; j < n - i -1;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // Printing Sorted array
    for (int i = 0; i < n; i++){
        cout << arr[i]<<" ";
    }
    return 0;
}