//
//  main.cpp
//  Primera clase
//
//  Created by Ricardo Asin on 5/9/22.
//

#include <iostream>
using namespace std;

int main() {
    
    
    // insert code here...
    
    float precio;
    cout << "Introduce el precio "<<endl;
    cin>>precio;
    cout << "El precio sin IVA es "<<precio<<endl;
    float iva;
    iva = precio*0.13;
    cout<<"IVA es: "<<iva<<endl;
    double total;
    total = iva+precio;
    cout<<"El total a pagar es: "<< total<<endl;
    
    
    
    
    return 0;
}
