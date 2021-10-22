#include <iostream>
#include <string>
#include <stdlib.h>

auto main() -> int 
{
    int liczba_losowa;
    auto strzal = std::string{};
    srand(time(NULL));
    liczba_losowa = rand()%100+1;
    do
    {
        std::cout<<"zgadnil liczbe \n";
        std::getline(std::cin, strzal);
        auto a = std::stoi(strzal);
        if(liczba_losowa==a)
        {
            std::cout<<"Perfekcyjnie! \n";
            break;
        }
        else if(liczba_losowa>a)
        {
            std::cout<<"Za mało! \n";
        }
        else
        {
            std::cout<<"Za dużo! \n";
        }
    }
    while(true);
}
