// Sobrecarga do Operador +

#include<bits/stdc++.h>
using namespace std;

class Complex
{
public:
    int real, imag;

    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }
    Complex operator+(Complex& c)
    {
        return Complex(this->real + c.real,this->imag + c.imag);
    }
};

int main(int argc,char* argv[])
{
    Complex c1(1, 2), c2(3, 4);
    Complex c3 = c1 + c2;

    cout << "Number: " << c3.real << endl;
    cout << "Imaginary Number: " << c3.imag << endl;
    return 0;
}
