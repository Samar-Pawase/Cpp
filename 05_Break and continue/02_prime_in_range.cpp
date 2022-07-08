// WAP to print all the prime numbers in a given range

#include<iostream>
using namespace std;


int main()
{
    int start, end,num, i;
    cin >> start >> end;
    for (num = start; num < end;num++){
        for (i = 2; i < num;i++){
            if (num%i==0){
                break;
            }
        }
        if(num==i){
            cout << num << "\n";
        }
    }
    return 0;
}