// Wap to print pascals triangle with the help of functions

/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1  for n = 5
*/

#include<iostream>
using namespace std;

int fact(int n){
    int factorial = 1;
    for (int i = 2; i <= n;i++){
        factorial *= i;
    }
    return factorial;
}

int nCr(int n, int r){
    return (fact(n)) / (fact(n - r) * fact(r));
} 

void pascal_triangle(int n)
{
    for (int i = 0; i < n;i++){
        for (int j = 0; j <= i;j++){
            cout << nCr(i, j)<<" ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pascal_triangle(n);
    return 0;
}