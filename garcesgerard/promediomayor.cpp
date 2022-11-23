//Programa de Garces

 #include<iostream> // Esta linea llama o incorpora las librerias al programa    
  using namespace std;//lo que hace declarar el paso de nombre   
  int main() //funcion principa, sirve para encapsular el programa que se va a ejecutar    
    
  {  
          float x,pm=0;// Declara las variabkes  
          int i=0,l; //Guarda los valores  
          cout<<"ingrese l: "; cin>>l; // Para ingresar el valor del usuario  
          do{ //Hagase hasta que 
    
          cout<<"ingrese x:  "; cin>>x; // Para ingresar el valor del usuario   
          i=i+1;  
          if(x>pm){  
    
                  pm=x;  
    
          }  
     
          }while(i<l)  //la condicion, permite una intrucion compuesta   
          cout<<"el promedio maximo del curso fue:  "<<pm<<endl<<endl;  
          return 0;//Una vez haber resuelto todo y haber declarado se procede a dar por finalizado y ejecutar el programa  
    
  }
