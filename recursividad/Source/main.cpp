#include <iostream>
 
int factorial(int n){
  if(n==0){
    return 1;
  }
  return n * factorial(n-1);
}

int main(int argc, const char* argv[])
{
  int numero;
  std::cout<<"Ingresa un numero del 1 al 5 \n";
  std::cin>> numero;
  if(numero < 0){
    std::cout<<"Error el factorial no puede ser defini como negativo\n";
  }
  else{
    std::cout <<"El factorial de " <<numero << " es " << factorial(numero)<<std::endl;
  }


	return 0;
}
