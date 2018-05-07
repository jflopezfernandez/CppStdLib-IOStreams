
#include <iostream>

template <typename T, typename Traits>
std::basic_ostream<T, Traits>&
NL(std::basic_ostream<T, Traits>& out)
{
    return out << out.widen('\n');
}


int main()
{
    std::cout << "testing..." << NL;
    std::cout << "new line char..." << NL;
}