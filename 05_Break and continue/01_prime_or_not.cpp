// WAP to find if given number is prime or not

#include<iostream>
using namespace std;


int main()
{
    int input;
    cin >> input;
    int i;
    for (i = 2; i < input;i++){
        if(input % i==0){
            break;  // Breaks the loop when num is divisible by i
        }
    }
    if(input==i){
        cout << "prime";
    }else{
        cout << "Not prime";
    }
        return 0;
}