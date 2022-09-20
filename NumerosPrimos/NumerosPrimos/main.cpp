//
//  main.cpp
//  NumerosPrimos
//
//  Created by Ricardo Asin on 19/9/22.
//

#include <iostream>
using namespace std;
int main() {
    cout << "Hasta que número"<<endl;
    int h;
    cin>>h;
    
    int f = 0;
    for (int n = 2; n<=h; n++) {
        for (int i = 2; i<=n; i++) {
            
           if(n%i==0 && n%n ==0)
           {
               f++;
           }
           
        }
        if(f>2){
            f = 0;
        }
        else{
            cout<<"SI Es primo: "<<n<<endl;
        }
        
        
        

       
     
            }
    
    return 0;
}
