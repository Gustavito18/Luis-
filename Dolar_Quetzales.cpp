#include <iostream>

using namespace std;
int main ()
{
    int cambio;
	float  cantidadactual, quetzales, dolares;
	
	
	cout<<"Ingrese el tipo de cambio que desea hacer: "<<endl;
	cout<<"1-Dolar a quetzal"<<endl;
	cout<<"2-Quetzal a dolar"<<endl;
	cin>>cambio;
	
	switch (cambio){
	
	case 1:
    	cout<<"Ingrese el valor de dolares en quetzales: "<<endl;
   	     cin>>cantidadactual;
    	cout<<"Ingrese la cantidad de dolares a cambiar: "<<endl;
	     cin>>dolares;
	
	quetzales = dolares * cantidadactual;
	cout<<dolares << "dolar equivales a " << quetzales << "Quetzales" << endl;
	break;
	
	case 2:
       	cout<<"Ingrese el valor de quetzales en dolares: "<<endl;
	     cin>>cantidadactual;
    	cout<<"Ingrese la cantidad de quetzales a cambiar: "<<endl;
	     cin>>dolares;
	
	dolares = quetzales * cantidadactual;
	cout<<quetzales << "quetzales equivales a " << dolares << "dolares" << endl;
	break;
	
	default:
		cout<<"Opcion invalida";
		break;
	}	
return 0;
}
