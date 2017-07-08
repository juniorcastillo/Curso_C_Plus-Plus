/*
 1. Escribe un programa quelea de la entrada estandar dos numeros
 y muestre en la salida estrandar su suma, resta, multiplicacion 
 y division.*/
 
 
 #include <iostream>
 
 using namespace std;
  
 int main(){
 	
 	int num1,num2;
 	int suma=0;
 	int resta=0;
 	int mul=0;
 	double division=0;
 	
 	
 	cout<<"Por favor inserte el primer numero: ";
 	cin >>num1;
 	cout<<"Por favor inserte el segundo numero: ";
 	cin >>num2;
 	
 	//Hacer las operaciones
 	
 	suma = num1 + num2;//sumar los valores
 	resta= num1 - num2;//restar los valores
 	mul= num1 * num2;//mul los valores
	division= num1 / num2;//divlos valores
 
 	cout<<" La suma es: " << suma <<"\n \n";
 	cout<<" La resta es:  " << resta <<"\n \n";
 	cout<<" La multiplicacion es:  " << mul <<"\n \n";
	cout<<" La division es:  " << division <<"\n \n";
	
 	return 0;
 }
