//
//  main.cpp
//  EjerciciosParConFor
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
        if(i%2 != 0)
        
        cout<<"Numero "<<i <<endl;
     
    }
    
    cout << "----------------"<<endl;
    
    
    
    
    
    
    
    return 0;
}
