//
//  main.cpp
//  Descuento clientes con funciones
//
//  Created by Ricardo Asin on 10/10/22.
//

#include <iostream>
using namespace std;


float totalAPagar(float monto);



int main() {
    int verificar;
    float m;
    float total;
    int masClientes;
    
    do{
        do{
            cout << "Es cliente? "<<endl;
            cout << "Digite [1] Si es cliente"<<endl;
            cout << "Digite [0] No es cliente"<<endl;
                cin>>verificar;
            
        }while(verificar>1 || verificar<0);

        
        if(verificar==1){
            cout << "Introduce el monto a pagar "<<endl;
            cin>>m;
            total = totalAPagar(m);
            cout << "-------------------------------"<<endl;
            cout << "El total a pagar es: "<<total<<endl;
            cout << "-------------------------------"<<endl;
            
        }
        else{
            cout << "Introduce el monto a pagar "<<endl;
            cin>>m;
            total = m;
            cout << "-------------------------------"<<endl;
            cout << "El total a pagar es: "<<total<<endl;
            cout << "-------------------------------"<<endl;
        }
        cout << " "<<endl;
        cout << "-------------------------------"<<endl;
        
        cout << "Desea introducir otro cliente: "<<endl;
        cout << "Digite [1] Más clientes"<<endl;
        cout << "Digite [0] Salir"<<endl;
        cin>>masClientes;
    }while(masClientes==1);
    cout << "-------------------------------"<<endl;
    cout << "Usted ha salido del programa"<<endl;
    cout << "-------------------------------"<<endl;
    return 0;
}

float totalAPagar(float monto){
    float descuento = 0;
    
    if(monto <= 500){
        descuento = monto*0.03;
    }
    
    else if ((monto >= 501) && (monto<=1000)){
        descuento = monto*0.06;
    }
    else if ((monto >= 1001) && (monto<=2000)){
        descuento = monto*0.12;
    }
    else if (monto >= 2001){
        descuento = monto*0.25;
    }
    
    float totalAPagar;
    totalAPagar = monto-descuento;
    
    return totalAPagar;
    
    
}

