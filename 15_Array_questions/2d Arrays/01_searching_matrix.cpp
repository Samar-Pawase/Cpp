#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, m;
    cin >> n>> m;
    int arr[n][m];
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> arr[i][j];
        }  
    }

    int ele;
    cin >> ele;
    bool flag = -1;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if(arr[i][j] == ele){
                flag = 1;
            }
        }  
    }
    if(flag){
        cout << "Element found";
    }
    else{
        cout << "Element not found";
    }
        return 0;
}

