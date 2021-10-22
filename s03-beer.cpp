#include <iostream>
#include <string>
#include <stdlib.h>

auto main(int argc, char* argv[]) -> int 
{
	auto temp = argv[1];
    if(temp)
    {
		auto const a=std::atoi(temp);
		for(int i=a; i>0;i--)
		{
			std::cout<<i << " bottles of beer on the wall, "<<i <<" bottles of beer. \n";
			std::cout<<	"Take one down, pass it around, " <<i-1 <<" bottles of beer on the wall... \n";
			if (i==1)
			{
				std::cout<< "1 bottle of beer on the wall, 1 bottle of beer. \nTake it down, pass it around, 0 bottles of beer on the wall...\n";
			}
		}
		std::cout<< "No more bottles of beer on the wall, no more bottles of beer. \nGo to the store and buy some more, 99 bottles of beer on the wall... \n";
	}
	else
	{
		for(int i=99; i>1;i--)
		{
			std::cout<<i << " bottles of beer on the wall, "<<i <<" bottles of beer. \n";
			std::cout<<	"Take one down, pass it around, " <<i-1 <<" bottles of beer on the wall... \n";
		}
		std::cout<< "1 bottle of beer on the wall, 1 bottle of beer. \nTake it down, pass it around, 0 bottles of beer on the wall... \n";
		std::cout<< "No more bottles of beer on the wall, no more bottles of beer. \nGo to the store and buy some more, 99 bottles of beer on the wall... \n";
	}
}
