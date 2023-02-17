#include <iostream>
#include <string>

/*
int main()
{   
    
    std::string str = "today";
    std::string::iterator it;
    int count = 0;

    for(it = str.begin(); it !=str.end(); it++)
    {
        *it = *it-32;
    }
    std::cout << str << "Hello ";

    std::string str2 = "WeLcOmE5";
    for(int j=0; str2[j]!='\0'; j++)
    {
        if(str2[j]>=97 && str2[j] <=122)
        {
            str2[j] -= 32;
        }
        
    }
    std::cout << str2; 
    
    int v=0, s=0, c=0;
    std::string str = "how    Many Words";
    for (int i=0; str[i]!='\0'; i++)
    {
        if(str[i] == 'a'|| str[i] == 'A'|| str[i] == 'e'||str[i] == 'E'||str[i] == 'i'||str[i] == 'I'||str[i] == 'o'||str[i] == 'O'||str[i] == 'u'||str[i] == 'U')
        {
            v++;
        }
        else if(str[i] == ' ')
        {
            if(str[i] == ' ' && str[i+1] == ' ')
            {
                
            }
            else
            {
                s++;

            }
        }
        else
        {
            c++;
        }
    }
    std::cout << "vowel:" << v << " conso:" << c << " space:" << s+1 << std::endl;
    
    std::string str1 = "holiday";
    std::string str2 = "";
    int len = (int)str1.length();
    str2.resize(len);
    for(int i=0, j=len-1; i<len; i++,j--)
    {
        str2[i] = str1[j];
    }
    str2[len] = '\0';
    std::cout << str2;
    if(str1.compare(str2)==0)
    {
        std::cout<<"same";;
    }
    else
    {
        std::cout<<"diff";
    }
    
    std::string email = "wootak95@gmail.com";
    int i = email.find('@');
    std::string sub = email.substr(0,i);
    std::cout <<sub;
    

    return 0;
}

int Search(int A[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(key == A[i])
        {
            return i;
        }
    
    }
}
*/
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
    std::cout << "3 grades" << std::endl;
    std::cin >> x >> y >> z;

    Student s(R,n,x,y,z);
    std::cout << "Roll No:" << s.getRoll() << s.getName() << std::endl;

    std::cout << "Total grade is " << s.total() << std::endl;
    std::cout << "Letter grade is " << s.grade() << std::endl;
}


