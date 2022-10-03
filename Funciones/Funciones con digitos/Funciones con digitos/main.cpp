//
//  main.cpp
//  Funciones con digitos
//
//  Created by Ricardo Asin on 3/10/22.
//

#include <iostream>
int invertir_numero(int numero);

void verificar_capicua(int numero);


using namespace std;

int main() {
    int n;
    int inverso;
    cout << "Ingrese el número: "<<endl;
    cin>> n;
    
    inverso = invertir_numero(n);
    cout<<"El numero inverso es: "<<inverso<<endl;
    verificar_capicua(n);
    
    
    
    return 0;
}

int invertir_numero(int numero)
{
    int numero_inverso = 0;
    int digito = 0;

    while (numero > 0)
    {
        digito = numero % 10;
        numero_inverso = (numero_inverso * 10) + digito;
        numero = numero / 10;

    }

    return numero_inverso;


}
//Verifica y muestra si es Capicua
void verificar_capicua(int numero)
{
    int inverso;
    inverso = invertir_numero(numero);
    if (numero == inverso)
    {
 
        cout << "El numero SI es capicua " << endl;;
    }
    else
    {

        cout << "El numero NO es capicua " << endl;;
    }
    
}

