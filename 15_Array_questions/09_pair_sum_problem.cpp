// Pair sum problem

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
    int k;
    cin >> k;

    int lowptr = 0;
    int highptr = n;
    for (int i = 0; i < n;i++){
        if(arr[lowptr]+arr[highptr]>k){
            lowptr += 1;
        }else if(arr[lowptr]+arr[highptr]<k){
            highptr -= 1;
        }
        else if (arr[lowptr] + arr[highptr] == k){
            cout << lowptr << " " << highptr;
        }
        else{
            cout << "-1";
        }
    }
    return 0;
}