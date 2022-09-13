//
//  main.cpp
//  EjemplosFor
//
//  Created by Ricardo Asin on 13/9/22.
//

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // insert code here...
    
    int alCuadrado;
    cout << "Practico de for "<<endl;
    cout << "----------------"<<endl;

    int inicio = 1;
    int n;
    int s = 0;
    cout<<"Hasta que número?"<<endl;
    cin>>n;
    cout << "----------------"<<endl;
    
    for (int i = inicio;i<=n ; i++) {
        alCuadrado= pow(i,2);
        cout<<"Numero "<<i << " = "<<alCuadrado<<endl;
        s = s+alCuadrado;
    }
    
    cout << "----------------"<<endl;
    cout<<"La suma es: "<<s<<endl;
    cout<<"--------------------------------"<<endl;
    
    int i;
    i = inicio;
    
    while(i<n){
        
        cout<<i<<endl;
        i++;
        
    }
    
    
    
    
    
    
    return 0;
}
