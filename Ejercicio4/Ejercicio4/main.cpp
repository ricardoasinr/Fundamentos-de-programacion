//
//  main.cpp
//  Ejercicio4
//
//  Created by Ricardo Asin on 12/9/22.
//

#include <iostream>

using namespace std;

int main() {
    // insert code here...
  
    cout<<"Digite el nombre del trabajador"<<endl;
    string nombre;
    cin>>nombre;
    
    cout<<"Digite el precio por hora trabajada"<<endl;
    float precioPorHora;
    cin>>precioPorHora;
    
    cout<<"Digite las horas trabajadas"<<endl;
    float horasTrabajadas;
    cin>>horasTrabajadas;
    
    float salarioBruto = horasTrabajadas*precioPorHora;
    
    float iva = 0.13;
    float salarioNeto;
    float descuento;
    
    if(salarioBruto > 8272)
    {
        descuento = salarioBruto*iva;
        salarioNeto = salarioBruto-descuento;
        
        cout<<""<<endl;
        cout<<"-----------------------"<<endl;
        cout<<"Nombre del trabajador: "<<nombre<<endl;
        cout<<"Horas trabajadas: "<<horasTrabajadas<<endl;
        cout<<"Salario bruto: "<<salarioBruto<<endl;
        cout<<"Se tiene que aplicar RC-IVA"<<endl;
        cout<<"Salario neto: "<<salarioNeto<<endl;
        
    }
    else {
        salarioNeto = salarioBruto;
        cout<<""<<endl;
        cout<<"-----------------------"<<endl;
        cout<<"Nombre del trabajador: "<<nombre<<endl;
        cout<<"Horas trabajadas: "<<horasTrabajadas<<endl;
        cout<<"Salario bruto: "<<salarioBruto<<endl;
        cout<<"No se tiene que aplicar RC-IVA"<<endl;
        cout<<"Salario neto: "<<salarioNeto<<endl;
    }
    
    
  
    
    

    
    
    
    
    return 0;
}
