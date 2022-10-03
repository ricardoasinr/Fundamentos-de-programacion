//
//  main.cpp
//  Ejercicio5 - Práctico 3
//  Factorial
//  Created by Ricardo Asin on 20/9/22.
//

#include <iostream>
using namespace std;

int main() {
    int n;
  
    cout << "Hasta que número"<<endl;
    cin>>n;
    int mult =1;
    
    for (int i = 1; i<=n; i++) {
        cout<<i<<endl;
        
        mult=mult*i;
        
        
    }
    
    cout<<"Factorial: "<<mult<<endl;
    
    
    return 0;
}
