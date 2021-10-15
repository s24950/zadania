#include <iostream>
#include <string>

auto odlicz(std::string init) ->void

{
	auto a = std::stoi (init);
	
	if (a>0)
	{
		for(int i=a;i>=0;i--)
		{
			std::cout << i << "...." << '\n';
		}
	}
	if (a<0)
	{
		for(int i=a;i<=0;i++)
		{
			std::cout << i << "...." << '\n';
		}
	}
	
		
}
auto main(int argc, char* argv[]) -> int
{
	
	odlicz(argv[1]);
	
	
	return 0;
	
}
