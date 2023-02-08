#include <iostream>
using namespace std;
#include <string>

template <typename T>
T min <T a,T b>
{
    return (a<b) ? a:b;
}

int main()
{
    std::cout<< min <int> (2,3)<<std::endl;
    return 0;
}
