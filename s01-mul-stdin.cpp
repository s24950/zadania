# include < iostream >
# include < string >
auto main () -> int
{
auto tmp = std :: string {};
// temporary variable
std :: getline ( std :: cin , tmp );
std :: cout << " a = ";
auto const a = std :: stoi ( tmp );
std :: cout << " b = ";
std :: getline ( std :: cin , tmp );
auto const b = std :: stoi ( tmp );
std :: cout << ( a * b ) << "\ n ";
return 0;
}
