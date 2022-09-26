//
//  main.cpp
//  Verificar si es base 8
//
//  Created by Ricardo Asin on 26/9/22.
//

#include <iostream>
using namespace std;
int main() {
    int n,digito, numero;
    numero = 0;
    
    bool base8 = true;
    
    int numeroIntroducido;
       cout<<"Ingrese el numero"<<endl;
       cin>>n;
    numeroIntroducido = n;
       while(n>0 &&  base8 == true)
       {
           digito=n%10;
           n=n/10;
           
           if(digito >= 8){
               
               base8 = false;
               
               cout<<"El numero "<<numeroIntroducido<<" no pertenece a base 8"<<endl;
               
               
           }
       }
    
    if(base8 == true){
        cout<<"El numero "<<numeroIntroducido<<" SI pertenece a base 8"<<endl;
    }
    
    
       return 0;
}
