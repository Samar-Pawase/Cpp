// Insertion sort - Insert an element from unsorted array to it's correct position in sorted array

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

    // Sorting Algorithm
    for (int i = 1; i < n;i++){
        int current = arr[i];
        int j = i - 1;
        while(j>=0 && current<arr[j]){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

        // Printing sorted array
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        } 
    return 0;
}