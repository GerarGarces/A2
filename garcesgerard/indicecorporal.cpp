//Programa de Garces
#include<iostream>   // Esta linea llama o incorpora las librerias al programa
 using namespace std;  // lo que hace declarar el paso de nombre
 int main() // funcion principal, sirve para encapsular el programa que se va a ejecutar
         { 
                 float imc,peso,altura;  // Declara las variables
                 cout<<"Ingrese el peso (Kg) : "; cin>>peso;  // Para ingresar el valor del usuario
                 cout<<"Ingrese la altura (metros) : "; cin>>altura; 
                 imc=peso/(altura*altura); 
                 if(imc<18.5){ 
                         cout<<"Usted tiene bajo peso"<<endl; 
                 } 
                 if (imc>=18.5 && imc<24.9){ 
                         cout<<"Usted tiene peso normal"<<endl; 
                 } 
                 if(imc>=25 && imc<26.9){ 
                         cout<<"Usted tiene sobrepeso grado I "<<endl; 
                 } 
                 if (imc>50){ 
                         cout<<"Usted tiene obesidad tipo iv (extrema)  "<<endl;
                 }
                 
         }
