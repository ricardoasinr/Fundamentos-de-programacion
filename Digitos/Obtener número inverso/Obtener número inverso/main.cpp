//
//  main.cpp
//  Ejercicio 3 Práctico 4
//
//  Created by Ricardo Asin on 20/9/22.
//

#include <iostream>
using namespace std;
int main() {
    int n,digito;
    int numero_inverso = 0;
       cout<<"Ingrese el numero"<<endl;
       cin>>n;
    while (n > 0)
    {
        digito = n % 10;
        numero_inverso = (numero_inverso * 10) + digito;
        n = n / 10;
    }
    cout<<"El número inverso es: "<<numero_inverso<<endl;

       return 0;
}
