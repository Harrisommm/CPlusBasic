#include <iostream>

int main()
{
    int x = 4, y = 5;
    if(x>y)
    {
        std::cout << "x is larger" << std::endl;
    }
    else if (x<y)
    {
        std::cout << "y is larger" << std::endl;
    }
    else
    {
        std::cout << "equal" << std::endl;
    }

    return 0;
}