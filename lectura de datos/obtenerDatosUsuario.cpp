/*

3.Realice un programa que lea de entrada estandar los siguientes datos
de una persona:

 Edad: datos de tipo entero.
 Sexo: datos de tipo caracter.
 Altura en metros: datos de tipo real.
 
 
Tras leer los datos, el programa debe mostrarlos en la salida estandar
 

*/

#include <iostream>

using namespace std;

int main(){
	
	int edad;
	char sexo[10];
	float altura;
	
   // obtengo los datos del usuario
	cout<< "Introduzca su edad: ";
	cin>>edad;
	cout<< "Introduzca su sexo: ";
	cin>>sexo;
	cout<< "Introduzca su altura: ";
	cin>>altura;
	
	// muetro los datos del usuario
	cout<< "\n Edad: " << edad;
	cout<< "\n Sexo: " << sexo;
	cout<< "\n altura: " << altura;
	
	return 0;
}
