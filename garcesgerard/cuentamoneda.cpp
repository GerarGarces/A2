//Programa de Garces
#include<iostream> // Esta linea llama o incorpora las librerias al programa 
 using namespace std; //lo que hace declarar el paso de nombre 
 int main() //funcion principa, sirve para encapsular el programa que se va a ejecutar 
  
 { 
         float x=0,s=0,c1=0,s5=0;  //declara las variables 
         int s1=0,l,i1=0,i5=0;  //guarda los valores
         cout<<"ingrese l:  "; cin>>l;  //para ingresar el valor del usuario
         do{//hagase hasta que
          
         cout<<" ingrese x:  "; cin>>x;  //para ingresar el valor del usuario 
         i1=i1+1; 
         s=s+x; 
         if(x==1){ 
         i1=i1+1; 
         s1=s1+x; 
         }else{ 
         i5=i5+1; 
         s5=s5+x; 
         } 
         }while(i1==l); //la condicion, permite una intrucion compuesta
         cout<<"la cantidad de monedas fue:  " <<i1<<endl; 
         cout<<"el valor fue:  "<<s<<endl; 
          
         cout<<"la cantidad de monedas de s1 fue:  "<<i1<<endl; 
         cout<<"el valor fue:  "<<s<<endl; 
  
         cout<<"la cantidad de monedas s5 fue: "<<i5<<endl; 
         cout<<"el valor fue: "<<s5<<endl; 
         return 0; //Una vez haber resuelto todo y haber declarado se procede a dar por finalizado y ejecutar el programa 
  
 }
