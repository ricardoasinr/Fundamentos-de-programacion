//
//  main.cpp
//  Clase 2
//
//  Created by Ricardo Asin on 6/9/22.
//

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // insert code here...
    float diametro;
    float pi = 3.1416;
    float radio, circunferencia,area,volumen;
    
    cout << "Introduce el diametro"<<endl;
    cin>>diametro;
    
    //Los calculos
    //pow Funcion para elevar al cuadrado
    //Estructura de pow(variable, numero al que se quiere elevar)
    
    radio = diametro/2;
    area = 4*pi*(pow(radio,2));
    circunferencia = 2*pi*radio;
    volumen = (4/3)*pi*(pow(radio, 3));
    cout<<"------------------- "<<endl;
    cout<<"Radio: "<<radio<<endl;
    cout<<"------------------- "<<endl;
    cout<<"Volumen: "<<volumen<<endl;
    cout<<"Circunferencia: "<<circunferencia<<endl;
    cout<<"Area: "<<area<<endl;
    
    if(area>30){
        cout<<"El area resulto ser grande"<<endl;
    }
 
    
    
    
   
    return 0;
}
