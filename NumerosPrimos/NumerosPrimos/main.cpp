//
//  main.cpp
//  NumerosPrimos
//
//  Created by Ricardo Asin on 19/9/22.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hasta que número"<<endl;
    int n;
    cin>>n;
    
    for (int i = 0; i<=n; i++) {
        
        if(i%i==0 && i%1==0){
            
            cout<<"Es primo: "<<i<<endl;
        }
        
    }
    
    return 0;
}
