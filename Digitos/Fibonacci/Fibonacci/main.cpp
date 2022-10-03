//
//  main.cpp
//  Fibonacci
//
//  Created by Ricardo Asin on 26/9/22.
//

//Hallar el n-esimo número de Fibonacci.  Un número de Fibonacci se obtiene de la siguiente forma:   F0 = 1, F1 = 1,  luego el siguiente o tercer número se obtiene sumando F2=F1 + F0= 1+1=2.     Cada número de Fibonacci se obtiene sumando los dos últimos, es decir, Fi = Fi-1 + Fi-2,  i=2, 3, 4,     .
//Luego la secuencia de números Fibonacci es 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, etc.

#include <iostream>
using namespace std;

int main() {
  int aux = 1, fib = 0, n, inicio;
  cout << "Ingrese la cantidad de sucesión que quiere: "<<endl;
  cin >> n;
  cout << "-------------------------------------------------"<<endl;
    for(inicio = 1; inicio <= n; inicio++) {
      cout <<fib<<endl;
      aux = aux + fib;
      fib = aux - fib;
    }
  
    return 0;
}

