#include <iostream>
#include <string>
#include <stdlib.h>

auto main(int argc, char* argv[]) -> int 
{
	auto temp = argv[1];
    if(temp)
    {
        auto const a = std::atoi(temp);
        if(a>0)
        {   
            for(int i=1;i<=a;i++)
            {
                std::cout<<i<<" ";
                if(i%3==0)
                {                 
                    std::cout<<"Fizz"<<""; 
                }
                if(i%5==0)
                {
                    std::cout<<"Buzz"<<"";
                }
                std::cout<<"\n";
			}
        }
        if(a<0)
        {    
            for(int i=1;i>=a;i--)
            {
                std::cout<<i<<" ";
                if(i%3==0)
                {                 
                    std::cout<<"Fizz"<<""; 
                }
                if(i%5==0)
                {
                    std::cout<<"Buzz"<<"";
                }
                std::cout<<"\n";
            }
        }
		
	}
	else
	{
	std::cout << "Pdaj liczbe! \n";
	}
}
