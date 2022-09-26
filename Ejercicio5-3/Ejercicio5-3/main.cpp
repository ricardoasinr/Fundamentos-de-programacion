//
//  main.cpp
//  Ejercicio5-3
//
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
    
    cout<<"Total: "<<mult<<endl;
    
    
    return 0;
}
