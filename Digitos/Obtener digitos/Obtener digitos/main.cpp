//
//  main.cpp
//  Ejercicio 4 Práctico 4
//
//  Created by Ricardo Asin on 20/9/22.
//



#include <iostream>
using namespace std;
int main() {
    int n,digito;
       cout<<"Ingrese el numero"<<endl;
       cin>>n;
       while(n>0)
       {
           digito=n%10;
           n=n/10;
           cout<<"Digito: "<<digito<<endl;
           
       }
       return 0;
}
