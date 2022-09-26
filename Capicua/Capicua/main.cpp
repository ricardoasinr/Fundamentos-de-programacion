//
//  main.cpp
//  Capicua
//
//  Created by Ricardo Asin on 26/9/22.
//

#include <iostream>
using namespace std;
int main() {
    int n,digito, numeroInverso;
    int numeroIntroducido;
    numeroInverso = 0;
       cout<<"Ingrese el numero"<<endl;
       cin>>n;
    numeroIntroducido = n;
    
       while(n>0)
       {
           digito=n%10;
           numeroInverso = (numeroInverso*10)+digito;
           n=n/10;
           cout<<"Digito: "<<digito<<endl;
           
       }
    
    cout<<"Número inverso: "<<numeroInverso<<endl;
    
    if(numeroIntroducido==numeroInverso){
        cout<<"El número "<<numeroInverso<<" si es capicua"<<endl;
    }
    else
    {
        cout<<"El número "<<numeroInverso<<" NO es capicua"<<endl;
    }
       return 0;
}
