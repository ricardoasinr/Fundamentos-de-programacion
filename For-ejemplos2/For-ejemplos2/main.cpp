//
//  main.cpp
//  For-ejemplos2
//
//  Created by Ricardo Asin on 19/9/22.
//

#include <iostream>

using namespace std;

int main() {
    
    int n;
    
    int sumaPar = 0;
    int sumaImpar = 0;
    
    
    cout <<"Números pares del 1-N "<<endl;
    cin>>n;
    
    for (int i = 0; i<=n; i++) {
        
        if(i%2==0){
            cout<<"Número par: "<<i<<endl;
            sumaPar=sumaPar+i;
        }
        else {
            cout<<"Número impar: "<<i<<endl;
            sumaImpar=sumaImpar+i;
        }
        
    }
    
    cout<<"La suma de números pares es: "<<sumaPar<<endl;
    cout<<"La suma de números impares es: "<<sumaImpar<<endl;
    
 
   
    
    return 0;
}
