//
//  main.cpp
//  Ejercicos3erParcial
//
//  Created by Ricardo Asin on 17/11/22.
//

#include <iostream>
#include <string>

#define MAX 100 //SI O SI

using namespace std;

void cargarVectorInt(int vector[], int tamano);
void cargarVectorString(string vectorString[], int tam);
void mostrarVectorInt(int vector[], int tamano);
void mostrarVectorString(string vector[], int tamano);
void burbujasParaDosVectores(string A[], int B[],int tam);

void burbujasParaIntMayorAMenor(int B[],int tam);
void burbujasParaIntMenorAMayor(int B[],int tam);
void burbujasParaStringOrdenAlfabetico(string A[],int tam);


int main() {
    

//VECTOR INT
int vectorInt[MAX];

    int t;
    cout<<"Ingrese el tamano del vector"<<endl;
    cin>>t;
    cout<<"-----------------"<<endl;


    cout<<"Cargar el vector INT"<<endl;
    cout<<"-----------------"<<endl;
    cargarVectorInt(vectorInt, t);
    cout<<"-----------------"<<endl;
    cout<<"Mostrar el vector INT"<<endl;
    cout<<"-----------------"<<endl;

    mostrarVectorInt(vectorInt, t);
    
//VECTOR STRING
    
    string vectorString[MAX];
    
    
//        cout<<"Cargar el vector String"<<endl;
//        cout<<"-----------------"<<endl;
//        cargarVectorString(vectorString, t);
//        cout<<"-----------------"<<endl;
//        cout<<"Mostrar el vector String"<<endl;
//        cout<<"-----------------"<<endl;
//
//        mostrarVectorString(vectorString, t);
    
    cout<<"-----------------"<<endl;
    //burbujasParaDosVectores(vectorString, vectorInt, t);
   // burbujasParaIntMayorAMenor(vectorInt, t);
    burbujasParaIntMenorAMayor(vectorInt, t);
    
    cout<<"-----------------"<<endl;
    cout<<"Vectores ordenados"<<endl;
    cout<<"-----------------"<<endl;
    
    //mostrarVectorString(vectorString, t);
    mostrarVectorInt(vectorInt, t);
    
    
   
  
    return 0;
}


void cargarVectorInt(int vector[], int tamano) {
    int valor;
    cout << "Cargando vector: " << endl;
    for (int i = 0; i < tamano; i++)
    {
        cout << "Ingrese dato para el vector " << "[" << i << "]: " << endl;
        cin >> valor;
        vector[i] =  valor ;
    }

}

void mostrarVectorInt(int vector[], int tamano)
{

    for (int i = 0; i < tamano; i++)
    {
        cout << "Vector " << "[" << i << "] " << ": " << vector[i] << endl;
    }

}


void cargarVectorString(string vectorString[], int tam) {
   cin.ignore();
       for (int i=0;i<tam;i++)
       {
           cout<<"VectorString["<<i<<"]: ";
           getline(cin,vectorString[i]);
       }

}

void mostrarVectorString(string vector[], int tamano)
{

    for (int i = 0; i < tamano; i++)
    {
        cout << "Vector " << "[" << i << "] " << ": " << vector[i] << endl;
    }

}

void burbujasParaDosVectores(string A[], int B[],int tam)
{
    string aux;
    float aux2;
    for (int i=0; i<tam-1;i++)
        for (int j=i+1;j<tam;j++)
            if (A[i]>A[j])
            {
                aux=A[j];
                A[j]=A[i];
                A[i]=aux;
                aux2=B[j];
                B[j]=B[i];
                B[i]=aux2;
            }
}

void burbujasParaStringOrdenAlfabetico(string A[],int tam)
{
    string aux;
    
    for (int i=0; i<tam-1;i++)
        for (int j=i+1;j<tam;j++)
            if (A[i]>A[j])
            {
                aux=A[j];
                A[j]=A[i];
                A[i]=aux;
                
            }
}

void burbujasParaIntMenorAMayor(int B[],int tam)
{
   
    float aux;
    for (int i=0; i<tam-1;i++)
        for (int j=i+1;j<tam;j++)
            if (B[i]>B[j])
            {
                aux=B[j];
                B[j]=B[i];
                B[i]=aux;
            }
}

void burbujasParaIntMayorAMenor(int B[],int tam)
{
   
    float aux;
    for (int i=0; i<tam-1;i++)
        for (int j=i+1;j<tam;j++)
            if (B[i]<B[j])
            {
                aux=B[j];
                B[j]=B[i];
                B[i]=aux;
            }
}

