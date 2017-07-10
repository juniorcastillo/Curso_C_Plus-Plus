/**

1. Ejercicio de condicionales

Escriba un programa que lea tres numeros y determine cual de ellos es el mayor


*/


#include<iostream>

using namespace std;

int main(){
	
	int n1,n2,n3;
	
      cout<<"Please, digite 3 numeros:\n";cin>>n1>>n2>>n3;
		
		if((n1>n2) && (n1>n3)){
			
			cout<<"El mayor de los numeros es: "<< n1;
			
		}else if((n2>n1) && (n2>n3)){
			
			cout<<"El mayor de los numeros es: "<< n2;
		}else{
			cout<<"El mayor de los numeros es: "<< n3;
		}
	
	
	return 0;
	
}
