//
//  main.cpp
//  Función con while
//
//  Created by Ricardo Asin on 3/10/22.
//

#include <iostream>

bool primo(int n);



using namespace std;

int main() {
    int numero;
    cout << "Ingrese hasta que numero desea verificar: "<<endl;
    cin>>numero;
    
    for(int i = 2; i<=numero; i++){
        if(primo(i) == true){
            cout<<"El numero "<<i<<" es primo"<<endl;
        }
    }

    return 0;
}

bool primo(int n){
    int cantidadDeVecesQueSeDividio = 0;
    bool esPrimo = true;
    for(int i = 2; i<=n; i++){
        if(n%i == 0){
            cantidadDeVecesQueSeDividio++;
        }
    }
    if(cantidadDeVecesQueSeDividio>=2){
        cantidadDeVecesQueSeDividio = 0;
        esPrimo = false;
    }
    return esPrimo;
}



