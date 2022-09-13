//
//  main.cpp
//  Ejercicio6Practico2
//
//  Created by Ricardo Asin on 13/9/22.
//


#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // insert code here...
    
    int x;
    cout << "Practico de for 6"<<endl;
    cout << "----------------"<<endl;

    int inicio = 1;
    int n;
    int a;
    int s =0;
   
    cout<<"Hasta que número?"<<endl;
    cin>>n;
    
    cout<<"Digite X"<<endl;
    cin>>x;
    cout << "----------------"<<endl;
    
    for (int i = inicio;i<=n ; i++) {
        a = pow(x,i);
        s = s + a;
       
     
    }
    
    cout << "----------------"<<endl;
    cout<<s<<endl;
    
    
    
    
    
    
    
    
    return 0;
}

