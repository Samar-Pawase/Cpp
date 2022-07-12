// operator overloading 
// Complex and real number addition

#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
        int real, imag;
    public:
    Complex(int r, int i){
        real = r;
        imag = i;
    }
    Complex(){}

    Complex operator +(Complex const &obj){
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    void display(){
        cout << real << "i + " << imag;
    }
};

int main()
{
    Complex c1(2, 5);
    Complex c2(8, 12);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}