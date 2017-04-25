#include<iostream>
using namespace std;

int main ()
{
    int x=0;
    int i=0;
    int suma=0;
    
    cin>>x;
    
    for ( i=1; i<=x;i++ )
    {
        suma=suma+i;
    }

    cout<<suma;
    
    return 0;
}


