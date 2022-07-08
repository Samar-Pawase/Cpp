// WAP to find out if given char is alphabet or vowel

#include<iostream>
using namespace std;


int main()
{
    char input;
    cin >> input;

    bool isLowerVowel, isUpperVowel;
    isLowerVowel = (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u');
    isUpperVowel = (input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U');

    if(isLowerVowel || isUpperVowel){
        cout << "Vowel";
    }else{
        cout << "consonant";
    }
    return 0;
}