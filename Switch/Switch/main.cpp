//
//  main.cpp
//  Switch
//
//  Created by Ricardo Asin on 19/9/22.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    cout<<"----------MENU----------"<<endl;
    cout<<"1. Hamburguesa               36Bs.-"<<endl;
    cout<<"2. Soda                      6Bs.-"<<endl;
    cout<<"3. Combo Soda y Hamburguesa  40Bs.-"<<endl;
    
    int costo;
    int numeroDelMenu;
    
    cout<<"------------------------"<<endl;
    cout << "Introduce que número del menú desea"<<endl;
    cin>>numeroDelMenu;
    cout<<"------------------------"<<endl;
    
    
    switch (numeroDelMenu) {
        case 1:
            costo = 36;
            cout<<"Usted escogió la opcion: "<<numeroDelMenu<<endl;
            cout<<"Total a pagar: "<<costo<<endl;
            break;
            
        case 2:
            cout<<"Usted escogió la opcion: "<<numeroDelMenu<<endl;
            costo = 6;
            cout<<"Total a pagar: "<<costo<<endl;
            break;
            
        case 3:
            cout<<"Usted escogió la opcion: "<<numeroDelMenu<<endl;
            costo = 40;
            cout<<"Total a pagar: "<<costo<<endl;
            break;
            
        default:
            cout<<"Digite un número válido" <<endl;
            break;
    }
    
    
    return 0;
}
