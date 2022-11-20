#include <iostream>
using namespace std;

int main( )
{
    int zysk, liczba_miast;
    long long suma=0;
    long long zysk_maksymalny=0;
    cin>>liczba_miast;
    while (liczba_miast--)
    {
        cin>>zysk;
        suma+=zysk;
        if (suma > zysk_maksymalny)
        {
            zysk_maksymalny=suma;
        }
        if (suma < 0)
        {
            suma=0;
        }
    }
cout<<zysk_maksymalny<<endl;
return 0;
}
