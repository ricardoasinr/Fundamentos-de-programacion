//
//  main.cpp
//  Base 9
//
//  Created by Ricardo Asin on 26/9/22.
//

#include <iostream>
using namespace std;
int main() {
    int n,digito, numero;
    numero = 0;
       cout<<"Ingrese el numero"<<endl;
       cin>>n;
       while(n>0)
       {
           digito=n%9;
           numero = (numero*10)+digito;
           n=n/9;
           cout<<"Digito: "<<digito<<endl;
           
       }
    
    cout<<numero<<endl;
       return 0;
}
