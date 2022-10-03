//
//  main.cpp
//  While
//
//  Created by Ricardo Asin on 13/9/22.
//

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    // insert code here...
    cout << "Hasta que numero?"<<endl;
    int n;
    cin>>n;
    
    int inicio = 1;
    
    int i;
    i = inicio;
    
    int sumaPar=0;
    int sumaImpar=0;
    
    while(i<=n){
        if(i%2 == 0)
        {
            cout<<"Número par: "<<i<<endl;
            sumaPar=sumaPar+i;
        }
        else {
            cout<<"Número impar: "<<i<<endl;
            sumaImpar=sumaImpar+i;
        }
        i++;
    }
    
    cout<<"La suma de números pares es: "<<sumaPar<<endl;
    cout<<"La suma de números impares es: "<<sumaImpar<<endl;
    return 0;
}
