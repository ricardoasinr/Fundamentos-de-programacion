//
//  main.cpp
//  Hora
//
//  Created by Ricardo Asin on 27/9/22.
//

#include <iostream>
#include <ctime>
#include<windows.h>

  using namespace std;
int main()
  {
    
    Sleep(1000);
    system("cls");
     int seg=0, minutos=0,horas=0;
     bool ciclo=true;
     while(ciclo==true)
     {
         cout<<horas<<";"<<minutos<<":"<<seg<<endl;
         seg++;
         if(seg==60)
{
minutos++;
seg = 0; }
         if(minutos==60)
         {
horas++;
minutos = 0; }
         if(horas==13)
         {
             horas=1;
             seg=0;
             minutos=0;
} }
    int sec =10;
//delay(sec);
return 0;
    
}
