//Programa de Garces

#include<iostream>  // Esta linea llama o incorpora las librerias al programa 
 using namespace std;  // lo que hace declarar el paso de nombre
 int main() //funcion principal, sirve para encapsular el programa que se va a ejecutar 
  
 { 
         int aa,ma,da,an,mn,dn,a,m,d;   //guarda los valores 
         cout<<"ingrese la fecha actual: ";   //para ingresar el valor del usuario 
         cin>>aa>>ma>>da; 
  
         cout<<"ingrese la fecha de nacimiento:  "; 
         cin>>an>>mn>>dn; 
         if(da>dn){ 
                 d=da-dn; 
  
         }else{ 
                 da=da+30; 
                 ma=ma-1; 
                 d=da-dn; 
  
         } 
         if(ma>mn){ 
                 m=ma-mn; 
         }else{ 
                 ma=ma+12; 
                 aa=aa-an; 
                 m=ma-mn; 
         } 
         a=aa-an; 
         cout<<"usted tiene:  "<<a<<"años,"<<d<<"meses,"<<d<<"dias,"<<endl; 
         return 0; //Una vez haber resuelto todo y haber declarado se procede a dar por finalizado y ejecutar el programa  
  
 }
