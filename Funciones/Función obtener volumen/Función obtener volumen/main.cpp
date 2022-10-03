//
//  main.cpp
//  Función obtener volumen
//
//  Created by Ricardo Asin on 3/10/22.
//

#include <iostream>

float vol_cilindro(float radio, float altura);
void vol_cilindro2(float radio, float altura);

using namespace std;

int main() {
    // insert code here...
    float r, h;
    cout << "Hello, World!"<<endl;
    cout << "Ingrese altura: "<<endl;
    cin>>h;
    cout << "Ingrese radio: "<<endl;
    cin>>r;
    cout << "---------------------"<<endl;
    
    vol_cilindro2(r,h);

    
    
    
    
    
    return 0;
}

float vol_cilindro(float radio, float altura){
    
    cout<<"Entre a la función"<<endl;
    
    float volumen;
    double pi = 3.14159;
    volumen = (radio*radio)*altura*pi;
    
    return volumen;
}

void vol_cilindro2(float radio, float altura){
    
    cout<<"Entre a la función con void"<<endl;
    
    float volumen;
    double pi = 3.14159;
    volumen = (radio*radio)*altura*pi;
    cout<<"El volumen es: "<<volumen<<endl;
    
    
}
