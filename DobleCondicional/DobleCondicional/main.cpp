//
//  main.cpp
//  DobleCondicional
//
//  Created by Ricardo Asin on 13/9/22.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    cout << "Pregunta1: Tiene licencia"<<endl;
    string respuesta1;
    cin>>respuesta1;
    
    cout << "Pregunta2: Sabe conducir?"<<endl;
    string respuesta2;
    cin>>respuesta2;
    
    if(respuesta1 == "si" || respuesta2 == "si"){
        cout<<"Puede conducir"<<endl;
    }
    else{
        cout<<"NO Puede conducir"<<endl;
    }
    
    return 0;
}
