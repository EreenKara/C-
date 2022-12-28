#include <iostream>
using namespace std;

int main()
{
    int m=7,n=7;
    int orta=(m/2)+1;
    int orta1=(m/2)+1,orta2=(m/2)+1;
    
    for (size_t i = 0; i < m; i++)
    {
        if(i<orta)
        {
            orta1=orta-i;
            orta2=orta+i;
        }
        else
        {
            orta1=i-orta+2;
            orta2=m+orta-i-1;
        }

        for (size_t j = 0; j <= n; j++)
        {
            if(j==orta1||j==orta2)
                cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}