/**
2. Comprobar si un numero digitado por el usuario es positivo o negativo.


*/
#include<iostream>

using namespace std;

int main(){
	
	int n1;
	
      cout<<"Please, digite 1 numero:\n";cin>>n1;
		
		if (n1==0){
			
			cout<<"El numero es neutro";
	
		}else if (n1>0){
			cout<<"El numero es positivo";
		
		}else{
			cout<<"El numero es negativo";
		}
	
	
	return 0;
	
}
