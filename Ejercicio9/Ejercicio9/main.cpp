//
//  main.cpp
//  Ejercicio9
//
//  Created by Ricardo Asin on 12/9/22.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    int segundos;
    int horas;
    int minutos;
    int aux;
    int aux2;
    
    cout << "Digite los segundos"<<endl;
    cin>>segundos;
    
    if(segundos>=3600){
        horas = segundos/3600;
        cout<<"Hora: "<<horas<<endl;
        aux = segundos-3600;
        minutos = aux/60;
        aux2 = aux%60;
        cout<<"Minutos "<<minutos<<endl;
        cout<<"Segundos "<<aux2<<endl;
        
        
    }
    else{
        
        
        if (segundos>=60){
            minutos = segundos/60;
            aux2 = segundos%60;
            cout<<"Minutos "<<minutos<<endl;
            cout<<"Segundos "<<aux2<<endl;
        }
        else{
            cout<<"Segundos "<<segundos<<endl;
        }
        
        
        
    }
  
    
    return 0;
}
