#include <iostream>
#include <stdio.h>

using namespace std;
int main ()
{
	int opcion, num1, num2, operacion;  
	
	cout<<"Ingrese la opcion que desea utilizar: "<<endl;
	cout<<"1-Suma "<<endl;
	cout<<"2-Resta "<<endl;
	cout<<"3-Multiplicacion "<<endl;
	cout<<"4-Division "<<endl;
	cin>>opcion;
	
	system ("cls");
	
	
	switch (opcion){
		case 1:
			cout<<"Suma."<<endl;
			cout<<"Ingrese los numeros a sumar:"<<endl;
			cout<<"Primer numero: ";
			cin>>num1;
			cout<<"Segundo numero: ";
			cin>>num2;
			
			operacion = num1+num2;
			cout<<"Su total es de: "<<operacion<<endl;
			break;
			
				case 2:
			cout<<"Resta. "<<endl;
			cout<<"Ingrese los numeros a restar:"<<endl;
			cout<<"Primer numero: ";
			cin>>num1;
			cout<<"Segundo numero: ";
			cin>>num2;
			
			operacion = num1-num2;
			cout<<"Su total es de: "<<operacion<<endl;
			break;
			
				case 3:
			cout<<"Multiplicacion. "<<endl;
			cout<<"Ingrese los numeros a multiplicaar"<<endl;
			cout<<"Primer numero: ";
			cin>>num1;
			cout<<"Segundo numero: ";
			cin>>num2;
			
			operacion = num1*num2;
			cout<<"Su total es de: "<<operacion<<endl;
			break;
			
				case 4:
			cout<<"Division. "<<endl;
			cout<<"Ingrese los numeros a dividir:"<<endl;
			cout<<"Primer numero: ";
			cin>>num1;
			cout<<"Segundo numero: ";
			cin>>num2;
			
			operacion = num1/num2;
			cout<<"Su total es de: "<<operacion<<endl;
			break;
			
			
			
			default:
			cout<<"Opcion invalida";
			break;
			
			}
	return 0;	
}
