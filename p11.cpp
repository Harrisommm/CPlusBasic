#include <iostream>
#include <string>

//student practice11, this program collects employee info and calculate their wage, salary

class Employee
{
    private:
        int eid;
        std::string name;
    public:
        Employee(int id, std::string n)
        {
            eid = id;
            name = n;
        }
        std::string getName(){return name;}
        int getId(){return eid;}
};

class ParttimeEmployee:public Employee
{
    private:
        int wage;
    public:
        ParttimeEmployee(int id, std::string n, int w):Employee(id,n)
        {
            wage = w;
        }
        int getWage(){return wage;}
};

class FulltimeEmployee:public Employee
{
    private:
        int salary;
    public:
        FulltimeEmployee(int id, std::string n, int s):Employee(id,n)
        {
            salary = s;
        }
        int getSalary(){return salary;}
};

int main()
{
    ParttimeEmployee p1(1,"John",300);
    FulltimeEmployee p2(2,"Raj",5000);

    std::cout<<"Salary of "<<p2.getName()<<" is "<<p2.getSalary()<<std::endl;
	std::cout<<"Daily wage of "<<p1.getName()<<" is "<<p1.getWage()<<std::endl;
}
