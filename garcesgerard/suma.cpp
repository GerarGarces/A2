//Programa de Garces

 #include<iostream>// Esta linea llama o incorpora las librerias al programa  
  using namespace std; //lo que hace declarar el paso de nombre 
  int main() //funcion principa, sirve para encapsular el programa que se va a ejecutar 
  {  
    
          float x=0,s=0; //declara las variables 
          int i=0,l; //guarda los valores  
          cout<<"ingrese eo valor de l:  "; //para ingresar el valor del usuario  
          cin>>l;  
          do{  //hagase hasta que
    
          cout<<"ingrese el valor de x:  ";  
          cin>>x;  
          i=i+1;  
          s=s+x;  
             
          }while(i<l); //la condicion, permite una intrucion compuesta  
          cout<<"la suma de los numeros fue:  "<<s<<endl;  
          return 0;//Una vez haber resuelto todo y haber declarado se procede a dar por finalizado y ejecutar el programa 
    
 }
