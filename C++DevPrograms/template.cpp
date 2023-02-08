#include <iostream>
#include <string>

template <typename T>
T min (T a,T b)
{
    return (a<b) ? a:b;
}

int main()
{
    std::cout<< min (2,3)<<std::endl;
    std::cout<< min (2.2,3.5)<<std::endl;
    std::cout<< min ("Israr","Ali")<<std::endl;
    return 0;
}
