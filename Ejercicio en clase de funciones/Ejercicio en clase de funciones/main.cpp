//
//  main.cpp
//  Ejercicio en clase de funciones
//
//  Created by Ricardo Asin on 6/10/22.
//

#include <iostream>

using namespace std;
float sueldodeEmpleado(int cargo, int horas);
int main()
{
    int c,h;
    do{
        cout<<"Ingrese codigo de cargo"<<endl;
        cin>>c;
    }while(c>4 || c<1);
    
    do{
        cout<<"Ingrese horas trabajadas"<<endl;
        cin>>h;
    }while(h<1);
    
    cout<<"El sueldo es: "<<sueldodeEmpleado(c,h)<<endl;;
}
float sueldodeEmpleado(int cargo, int horas)
{
    int horaManager = 300;
    int horaSubGerente = 250;
    int horaSoporte = 150;
    int horaAuxiliar = 90;
    float sueldo;
    switch (cargo) {
        case 1:
            sueldo = horas*horaManager;
            
            break;
        case 2:
            sueldo = horas*horaSubGerente;
            break;
        case 3:
            sueldo = horas*horaSoporte;
            break;
        case 4:
            sueldo = horas*horaAuxiliar;
            break;
        default:
            sueldo = horas;
            cout<<"Digite un código válido"<<endl;
            break;
    }
   
    return sueldo;
}
