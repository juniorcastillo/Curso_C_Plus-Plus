/*
Escribe la siguiente expresion matematica como una expresion en c++:

a+b/c+d

y luego que muetre el resultado
*/

#include <iostream>

using namespace std;

int main(){
	 
	 float a, b, c, d,resul;
	 
	 cout<< "Digite el valor A de la expresion: "; cin>>a;
	 cout<< "Digite el valor B de la expresion: "; cin>>b;
	 cout<< "Digite el valor C de la expresion: "; cin>>c;
	 cout<< "Digite el valor D de la expresion: "; cin>>d;
	 
	 resul= (a+b)/(c+d);
	 
	 cout.precision(2);
	 cout<< "\n \nEl resultado es: " << resul;
	 
	
	
	return 0;
	
}

