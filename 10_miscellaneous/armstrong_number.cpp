// WAP to check if given number is armstrong number of not
// Armstrong number - sum of cubes of the digits of number is the number itself

#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int n_copy = n;
    int sum = 0;
    while(n_copy>0){
        int last_digit = n_copy % 10;
        sum += pow(last_digit,3);
        n_copy /= 10;
    }
    if(sum == n){
        cout << "Armstrong";
    }else{ 
        cout << "Not-armstrong";
    }
    return 0;
}