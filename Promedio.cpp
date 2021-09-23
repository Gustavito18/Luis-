#include<iostream>

using namespace std;
int main (){
	
	string nombre;
	int num1, num2, num3, promedio;
	
	cout<<"Ingrese su nombre: ";
	cin>>nombre;
	
	cout<<"Ingrese la nota 1 ";
	    cin>>num1;
	    
	cout<<"Ingrese la nota 2 ";
		cin>>num2;
		
	cout<<"Ingrese la nota 3 ";
		cin>>num3;
		
		promedio = (num1+num2+num3)/3;
		cout<<"El promedio es de: ";
		cout<<promedio <<endl; 
		cout<<nombre;
}
