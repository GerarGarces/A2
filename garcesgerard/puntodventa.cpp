//Programa de Garces 

 #include<iostream> // Esta linea llama o incorpora las librerias al programa   
  using namespace std;//lo que hace declarar el paso de nombre 
  int main() //funcion principa, sirve para encapsular el programa que se va a ejecutar  
    
  {        
    
          float x,s=0,vb,piva=12,viva,pdesc=10,vdesc,vn; //Declara las variabkes  
          int i=0,l; //Guarda los valores  
          cout<<"ingrese l:  ";cin>>l; // Para ingresar el valor del usuario  
          do{ //Hagase hasta que 
            
          cout<<"ingrese x:  ";cin>>x;  
          i=i+1;  
          s=s+x;  
            
          }while(i<l); //la condicion, permite una intrucion compuesta  
          vb=s;  
          viva=vb*piva/100;  
          vdesc=vb*pdesc/100;  
          vn=vb+viva-vdesc;  
          cout<<"el valor a pagar es de:  "<<vn<<endl<<endl;  
          return 0;//Una vez haber resuelto todo y haber declarado se procede a dar por finalizado y ejecutar el programa 
    
  }
