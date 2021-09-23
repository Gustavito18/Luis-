# include <iostream>


using namespace std;
int main()
{
	int edad, valor_producto;
	float calculo;

	cout<<"Productos disponibles:"<<endl;
	cout<<"Tv = 3,200"<<endl;
	cout<<"Refrigeradora = 2,300"<<endl;
	cout<<"Cama = 4,500"<<endl<<endl;
	
	cout<<"Ingrese su edad: "<<endl;
	cout<<"1- 50 años"<<endl;
	cout<<"2- entre 35 y 49 años"<<endl;
	cin>>edad;
	
	switch (edad){
		
		case 1:
		
			cout<<"Ingrese el costo del producto que desea adquirir"<<endl;
			cin>>valor_producto;
			
		calculo = valor_producto * 0.10;
		cout<<"Su total es de: "<<calculo;
		break;
		
		case 2: 
		  
			cout<<"Ingrese el costo del producto que desea adquirir"<<endl;
			cin>>valor_producto;
			
		calculo = valor_producto * 0.5;
		cout<<"Su total es de: "<<calculo;
		break;
		
		default:
			cout<<"Opcion invalida";
			break;
	}
	return 0;
}
