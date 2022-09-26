//
//  main.cpp
//  Laura
//
//  Created by Ricardo Asin on 26/9/22.
//

#include <iostream>
using namespace std;

int main()
{
    int n,digito,numeroinverso;
    numeroinverso=0;
    cout<<"Ingrese el numero"<<endl;
    cin>>n;
    while(n>0)
    {
        digito=n%10;
        numeroinverso=(numeroinverso*10)+digito;
        n=n/10;
     
        
    }
            cout<<"Numero Inverso: "<<numeroinverso<<endl;

    return 0;
}
