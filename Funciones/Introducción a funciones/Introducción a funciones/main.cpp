//
//  main.cpp
//  Introducción a funciones
//
//  Created by Ricardo Asin on 3/10/22.
//

#include <iostream>

void mult(int a, int b); //Prototipo

using namespace std;



int main() {
    cout << "Hello, World!"<<endl;
    int valorA = 3;
    int valorB = 2;
    int valorC;
    mult(valorA, valorB);
    


    
    return 0;
}

//Función
void mult(int a, int b){
    int c;
    c = a*b;
    cout<<"Resultado: "<<c<<endl;

}
