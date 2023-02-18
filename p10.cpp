#include <iostream>
#include <string>

//student practice10, this program provides class that helps add and display two rational numbers

class Rational
{
private:
    int nume;
    int deno;
    
public:
    Rational(int n=0, int d=0)
    {
        nume = n;
        deno = d;
    }
    void display()
    {
        std::cout << nume << " / " << deno;
    }
    friend Rational operator+(Rational c1, Rational c2);
    friend std::ostream & operator<<(std::ostream &out, Rational &c);
};

Rational operator+(Rational c1, Rational c2)
{
    Rational temp;
    if (c1.deno != c2.deno)
    {
        temp.deno = c1.deno * c2.deno;
        temp.nume = c1.nume*c2.deno + c2.nume*c1.deno;
        return temp;
    }
    else
    {
        temp.deno = c1.deno;
        temp.nume = c1.nume + c2.nume;
        return temp;
    }
}

std::ostream & operator<<(std::ostream &out, Rational &c)
{
    out << c.nume << " / " << c.deno;
    return out;
}

int main()
{
    Rational c1(1,3);
    Rational c2(2,5);
    Rational c3;
    c3 = c1 + c2;
    std::cout << c3;
}
