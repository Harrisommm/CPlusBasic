#include <iostream>
#include <string>

class Complex
{
private:
    int real;
    int img;
    
public:
    Complex(int r=0, int i=0)
    {
        real = r;
        img = i;
    }
    void display()
    {
        std::cout << real << "+i" << img;
    }
    friend Complex operator +(Complex c1, Complex c2);
    friend std::ostream & operator<<(std::ostream &out, Complex &c);
};

Complex operator + (Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

std::ostream & operator<<(std::ostream &out, Complex &c)
{
    out << c.real << "+i" << c.img;
    return out;
}

int main()
{
    Complex c1(10,5);
    Complex c2(5,10);
    Complex c3;
    c3 = c1 + c2;
    std::cout << c3;
}
