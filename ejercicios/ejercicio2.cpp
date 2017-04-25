#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main ()
{
    string texto;
    cout << "Ingrese un texto: ";
    cin >> texto;
    
    for ( auto i = texto.size()-1; i >= 0; i-- )
    {
        cout << texto[i];
    }
    
    
    
    return 0;
}