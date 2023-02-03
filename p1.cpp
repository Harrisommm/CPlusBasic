#include <iostream>

int main()
{   
 

    
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if((i+j)<=4)
            {
                std::cout << "* ";
            }
            else
            {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }

    //Draw Pattern given in description for n x n dimensions

    return 0;
}