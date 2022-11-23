//Programa de Garces

#include<iostream>  //  Esta linea llama o incorpora las librerias al programa 
 using namespace std; // lo que hace declarar el paso de nombre 
 int main() //funcion principa, sirve para encapsular el programa que se va a ejecutar 
  
 { 
         float x,s=0; // Declara las variabLes
         int i=0,l; //Guarda los valores
         cout<<"ingrese cantidad de egreso (l):  "; 
                 cin>>l; // Para ingresar el valor del usuario
         cout<<"ingrese saldo inicial (s):  "; 
         cin>>s; 
  
         do{ //Hagase hasta que 
          
         cout<<"ingrese egreso (x):  "; // Para ingresar el valor del usuario
         cin>>x; 
         i=i+1; 
         s=s+x; 
         }while(i<l);  //la condicion, permite una intrucion compuesta 
         cout<<"el saldo final es:  "<<s<<endl; 
         return 0; //Una vez haber resuelto todo y haber declarado se procede a dar por finalizado y ejecutar el programa
  
 }
