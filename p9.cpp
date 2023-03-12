#include <iostream>
#include <string>

class Student
{
private:
    int Roll;
    std::string name;
    int x,y,z;
    
public:
    Student(int R, std::string n, int a, int b, int c)
    {
        Roll = R;
        name = n;
        x = a;
        y = b;
        z = c;
    }
    int total()
    {
        return x + y + z;
    }
    char grade()
    {
        float avg = total()/3;
        if(avg > 60)
        {
            return 'A';
        }
        else if(avg <60 && avg >=40)
        {
            return 'B';
        }
        else
        {
            return 'C';
        }
    }
    int getRoll()
    {
        return Roll;
    }
    std::string getName()
    {
        return name;
    }
};

int main()
{
    int R;
    std::string n;
    int x=0,y=0,z=0;

    std::cout << "Roll No" << std::endl;
    std::cin >> R;
    std::cout << "Name" << std::endl;
    std::cin >> n;
    std::cin.ignore();
    std::getline(std::cin,n);
    std::cout << "3 grades" << std::endl;
    std::cin >> x >> y >> z;

    Student s(R,n,x,y,z);
    std::cout << "Roll No:" << s.getRoll() << " " << s.getName() << std::endl;

    std::cout << "Total grade is " << s.total() << std::endl;
    std::cout << "Letter grade is " << s.grade() << std::endl;
}
