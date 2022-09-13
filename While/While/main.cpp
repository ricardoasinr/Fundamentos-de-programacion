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
    
    while(i<=n){
        cout<<i<<endl;
        i++;
    }
    return 0;
}
