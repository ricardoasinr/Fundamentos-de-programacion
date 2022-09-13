//
//  main.cpp
//  Ejercicio4Practico2
//
//  Created by Ricardo Asin on 13/9/22.
//



#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // insert code here...
    
    int alCuadrado;
    cout << "Practico de for 4"<<endl;
    cout << "----------------"<<endl;

    int inicio = 1;
    int n;
    int acumuladorPar = 0;
    int acumuladorImpar = 0;
    cout<<"Hasta que número?"<<endl;
    cin>>n;
    cout << "----------------"<<endl;
    
    for (int i = inicio;i<=n ; i++) {
        if(i%2 == 0){
            
            cout<<"Numero par       "<<i <<endl;
            acumuladorPar = acumuladorPar + i;
            
        }
        
        else{
            
            cout<<"Numero impar     "<<i <<endl;
            acumuladorImpar = acumuladorImpar + i;
            
        }
     
    }
    
    cout << "----------------"<<endl;
    cout<<"Suma de pares: "<<acumuladorPar<<endl;
    cout<<"Suma de impares: "<<acumuladorImpar<<endl;
    int paresNegativo = acumuladorPar*(-1);
    int suma = paresNegativo+acumuladorImpar;
    cout<<"Resultado: "<<suma<<endl;
    cout<<"Resultado: "<<acumuladorImpar+paresNegativo<<endl;
    
    
    
    
    
    
    
    
    return 0;
}

