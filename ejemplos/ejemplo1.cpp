#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    vector <char> vtexto={ 'H', 'o', 'l', 'a' };
    cout <<"tamaño: " << vtexto.size() << endl;
    cout <<"caracter de la posicion 4:" << vtexto[3]<<endl;
    
    //Imprimir todos los caracteres
    for ( auto i: vtexto)
    cout << i;
    
    
    
    return 0;
}