#include <iostream>
#include <string>

//student practice 12, this program demonstrate polymorphism

class Shape
{
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};

class Rectangle:public Shape
{
private:
    float length, width;
public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }
    float area()
    {
        return length*width;
    }
    float perimeter()
    {
        return 2*(length + width);
    }
};

class Circle:public Shape
{
private:
    float radius;
public:
    Circle(float r)
    {
        radius = r;
    }
    float area()
    {
        return 3.1425*radius*radius;
    }
    float perimeter()
    {
        return 2*3.1425*radius;
    }
};

int main()
{
    Shape *s=new Rectangle(10,5);
        
    std::cout<<"Area of Rectangle "<<s->area()<<std::endl;
    std::cout<<"Perimeter of Rectangle "<<s->perimeter()<<std::endl;

    s=new Circle(10);
        
    std::cout<<"Area of Circle "<<s->area()<<std::endl;
    std::cout<<"Perimeter of Circle "<<s->perimeter()<<std::endl;
}
