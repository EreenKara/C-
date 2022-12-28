#include <iostream>
using namespace std;

template<typename T,typename B>

B Yazdir(T value,B value2)  
{
    cout<<value;
    return value2;
}

int main()
{
    cout<<Yazdir(3,"Merhaba");
}
