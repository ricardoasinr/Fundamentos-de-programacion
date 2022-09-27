//
//  main.cpp
//  NumerosPrimos2
//
//  Created by Ricardo Asin on 27/9/22.
//

#include <iostream>
using namespace std;
int main() {
    cout << "Ingrese un número:"<<endl;
    int n;
    cin>>n;
    
    int f = 0;
    
        for (int i = 2; i<=n; i++) {
            
           if(n%i==0 && n%n ==0)
           {
               f++;
           }
           
    }
    if(f>=2){
        f = 0;
        cout<<"NO Es primo: "<<n<<endl;
    }
    else{
        cout<<"SI Es primo: "<<n<<endl;
    }
    
    return 0;
}
